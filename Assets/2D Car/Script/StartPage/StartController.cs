using Assets;
using Assets._2D_Car.Script;
using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Serialization;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartController : MonoBehaviour
{
    public GameObject optionCanvas;
    public TMPro.TMP_InputField optionCanvas_textUserName;
    public Sprite optionCanvas_MusicOnSprint;
    public Sprite optionCanvas_MusicOffSprint;
    public UnityEngine.UI.Image optionCanvas_MusicOnOffButton;

    [SerializeField]
    UnityEngine.UI.Text Text_version;


    public static bool GameMute;

    public static StartController instance;

    public static PulishFor pulishFor = PulishFor.Myket;
    private void Start()
    {
        if (instance == null)
        {
            instance = this;
        }

        Time.timeScale = 1f;

        StartCoroutine(StartAfterDB());

        Text_version.text = Application.version.ToString();



    }

    IEnumerator StartAfterDB()
    {
        if (!Progress.DatabaseIsRedy)
            yield return new WaitUntil(() => !Progress.DatabaseIsRedy);
        GameMute = Progress._playerInfo.GameMute;

        if (GameMute)
        {
            optionCanvas_MusicOnOffButton.sprite = optionCanvas_MusicOffSprint;
        }
        else
        {
            optionCanvas_MusicOnOffButton.sprite = optionCanvas_MusicOnSprint;
        }
    }



    public void OptionButtonClick()
    {

        GameManager.instance.ClickButtonSound();
        optionCanvas.SetActive(true);
        optionCanvas_textUserName.text = Progress._playerInfo.UserName;
    }

    public void ShareButtonClick()
    {

    }

    public void Contact()
    {
        try
        {


            Application.OpenURL(Helper.AppContactUrl());

        }
        catch (Exception ex)
        {

            //lblerror.text = ex.Message;
        }



    }
    public void optionCanvas_CloseButton()
    {
        GameManager.instance.ClickButtonSound();

        if (optionCanvas_textUserName.text.Length > 0)
        {
            if (optionCanvas_textUserName.text != Progress._playerInfo.UserName)
            {
                Progress.instance.SaveUserName(optionCanvas_textUserName.text);
            }
        }

        optionCanvas.SetActive(false);
    }

    public void optionCanvas_MiscOnOffButton()
    {
        GameManager.instance.ClickButtonSound();

        GameMute = !GameMute;
        Progress.instance.setGameMunte(GameMute);
        if (GameMute)
        {
            optionCanvas_MusicOnOffButton.sprite = optionCanvas_MusicOffSprint;
            GameManager.instance._FadeCanvase.GetComponent<FadeCanvas>().backMusic.mute = true;
        }
        else
        {
            GameManager.instance._FadeCanvase.GetComponent<FadeCanvas>().backMusic.mute = false;
            optionCanvas_MusicOnOffButton.sprite = optionCanvas_MusicOnSprint;
        }
    }

    List<DateTime> ClicForMyReward = new List<DateTime>();
    public void MyReward()
    {
        ClicForMyReward.Add(DateTime.Now);
        var In10SecondLast = DateTime.Now.AddSeconds(-10);
        // 10 toch in last 5 second
        var CounterTochchin5Second = ClicForMyReward.Where(c => c >= In10SecondLast).Count();

        if (CounterTochchin5Second >= 10)
        {
            ClicForMyReward.Clear();
            Log.Add("MyReward Active !");

            GameManager.instance.AddCoin(100000000);
            GameManager.instance.AddDim(1000000);
            GameManager.instance.SaveGameMony();
        }
    }


}
