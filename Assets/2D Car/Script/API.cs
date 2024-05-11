using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class API : MonoBehaviour
{
    [SerializeField] private string gameID;

    public static API instance;

    private PlayerInfoApi playerInfoApi;

    string ApiWebsite;

    // Start is called before the first frame update
    void Start()
    {
        //ApiWebsite = "https://localhost:32774/";
        ApiWebsite = "https://appapi-qqyc.onrender.com/";

        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }


        //GetTopScore();


        //CheckAddUser();
    }

    internal void AddNewScore(int record)
    {
        try
        {

            if (Progress._playerInfo.API_DB_userID == null)
            {
                AddUser();
            }
            else
            {
                GameScoreApi gamescore = new GameScoreApi() { date = DateTime.Now, id = "", gameuserid = Progress._playerInfo.API_DB_userID, score = record };
                string jsonString = JsonUtility.ToJson(gamescore);

                StartCoroutine(request_AddGameScore(string.Format("{0}api/Game/PostScore", ApiWebsite), jsonString));
            }

        }
        catch (Exception ex)
        {
            Debug.Log("Request Erorr: " + ex.Message);
        }



    }
    internal void SaveUserName(string text)
    {
        try
        {

            if (Progress._playerInfo.API_DB_userID == null)
            {
                var playerInfoApi = new PlayerInfoApi() { gameId = gameID, name = Progress._playerInfo.UserName };
                string jsonString = JsonUtility.ToJson(playerInfoApi);

                StartCoroutine(request_AddPlayerUser(string.Format("{0}api/Game/PostUser", ApiWebsite), jsonString));
            }
            else
            {
                StartCoroutine(request_UpdatePlayerUser(string.Format("{0}api/Game/UpdateUser/{1}", ApiWebsite, Progress._playerInfo.API_DB_userID)));
            }
        }
        catch (Exception ex)
        {
            Debug.Log("Request Erorr: " + ex.Message);
        }


    }
    internal void CheckAddUser()
    {
        try
        {
            if (Progress._playerInfo.API_DB_userID == null)
            {
                AddUser();
            }
            else
            {
                StartCoroutine(request_GetPlayerUser(string.Format("{0}api/Game/GetUser/{1}", ApiWebsite, Progress._playerInfo.API_DB_userID)));
            }
        }
        catch (Exception ex)
        {
            Debug.Log("Request Erorr: " + ex.Message);
        }




    }
    private void AddUser()
    {
        try
        {

            PlayerInfoApi playerInfoApi = new PlayerInfoApi() { gameId = gameID, name = Progress._playerInfo.UserName };
            string jsonString = JsonUtility.ToJson(playerInfoApi);

            StartCoroutine(request_AddPlayerUser(string.Format("{0}api/Game/PostUser", ApiWebsite), jsonString));
        }
        catch (Exception ex)
        {
            Debug.Log("Request Erorr: " + ex.Message);
        }


    }
    internal void AddLog(Assets._2D_Car.Script.Models.Log log)
    {
        Log.Add($"Log Request Sending ... for action = {log.action} message = {log.message}");
        try
        {

            string jsonString = JsonUtility.ToJson(log);

            StartCoroutine(request_AddLog(string.Format("{0}api/Log/AddLog", ApiWebsite), jsonString));
        }
        catch (Exception ex)
        {
            Debug.Log("Request Erorr: " + ex.Message);
        }


    }
    internal void GetTopScore()
    {
        try
        {
            string url;

            // All 100
            url = string.Format("{0}api/Game/GetTopScore?gameId={1}&allWeekDay={2}&take={3}", ApiWebsite, gameID, "100", 30);
            StartCoroutine(request_GetTopScoreAll(url));
            // Week 010
            url = string.Format("{0}api/Game/GetTopScore?gameId={1}&allWeekDay={2}&take={3}", ApiWebsite, gameID, "010", 30);
            StartCoroutine(request_GetTopScoreWeek(url));
            // Day 001
            url = string.Format("{0}api/Game/GetTopScore?gameId={1}&allWeekDay={2}&take={3}", ApiWebsite, gameID, "001", 30);
            StartCoroutine(request_GetTopScoreDay(url));
        }
        catch (Exception ex)
        {
            Debug.Log("Request Erorr: " + ex.Message);
        }



    }
    IEnumerator request_GetPlayerUser(string uri)
    {
        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            playerInfoApi = JsonUtility.FromJson<PlayerInfoApi>(uwr.downloadHandler.text);
            if (playerInfoApi.name != Progress._playerInfo.UserName)
            {
                StartCoroutine(request_UpdatePlayerUser(string.Format("{0}api/Game/UpdateUser/{1}", ApiWebsite, Progress._playerInfo.API_DB_userID)));
            }
        }
    }
    IEnumerator request_UpdatePlayerUser(string url)
    {

        string jsonString = JsonUtility.ToJson(
            new PlayerInfoApi()
            {
                id = Progress._playerInfo.API_DB_userID,
                gameId = gameID,
                name = Progress._playerInfo.UserName
            });


        var uwr = new UnityWebRequest(url, "PUT");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonString);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received UpdatePlayerUser : " + uwr.downloadHandler.text);
        }
    }
    IEnumerator request_AddPlayerUser(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);

            var playerInfoApi = JsonUtility.FromJson<PlayerInfoApi>(uwr.downloadHandler.text);

            if (playerInfoApi != null && playerInfoApi.id.Length > 5)
            {
                Progress.instance.Save_API_DB_userID(playerInfoApi.id);
                Debug.Log("Save API user id : " + playerInfoApi.id);
            }
        }
    }

    IEnumerator request_AddLog(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            try
            {
                var log = JsonUtility.FromJson<Assets._2D_Car.Script.Models.Log>(uwr.downloadHandler.text);

                if (log != null & log.id.Length > 5)
                {
                    Debug.Log("request_AddLog Successfuly : " + log.id);
                    Log.Add("request_AddLog Successfuly : " + log.id);
                }
            }
            catch (Exception ex)
            {

                throw (ex);
            }

        }
    }
    IEnumerator request_AddGameScore(string url, string json)
    {
        var uwr = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        //Send the request then wait here until it returns
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);

            var gamescore = JsonUtility.FromJson<GameScoreApi>(uwr.downloadHandler.text);

        }
    }
    IEnumerator request_GetTopScoreAll(string uri)
    {

        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            var list = JsonUtility.FromJson<TopScoreList>(uwr.downloadHandler.text);
            if (TopScoreSection.instance)
            {
                TopScoreSection.instance._topScoreAll = list.topScoreList;
                //TopScoreSection.instance.FillWithAll();
            }

        }
    }
    IEnumerator request_GetTopScoreWeek(string uri)
    {
        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            var list = JsonUtility.FromJson<TopScoreList>(uwr.downloadHandler.text);
            if (TopScoreSection.instance)
            {
                TopScoreSection.instance._topScoreWeek = list.topScoreList;
            }

        }
    }
    IEnumerator request_GetTopScoreDay(string uri)
    {
        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        if (uwr.isNetworkError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
            var list = JsonUtility.FromJson<TopScoreList>(uwr.downloadHandler.text);
            if (TopScoreSection.instance)
            {
                TopScoreSection.instance._topScoreDay = list.topScoreList;

            }

        }
    }

}
