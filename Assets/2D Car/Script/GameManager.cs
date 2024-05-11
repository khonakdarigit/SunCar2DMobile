using Assets;
using Assets._2D_Car.Script;
using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;

    [SerializeField]
    private GameObject _gameOverCanvas;

    [SerializeField]
    private GameObject _gamePuseCanvas;

    [SerializeField]
    private GameObject _payDialogCanvas;

    [SerializeField]
    public List<GameObject> CarPrefabs;

    [SerializeField]
    private GameObject _CoinStatus;

    [SerializeField]
    public GameObject _DimStatus;

    [SerializeField]
    public GameObject _FadeCanvase;

    [SerializeField]
    public bool InGame;


    private GameObject _item_ForPay;


    public AudioClip audioClip_ButtonClick;


    public int CoinBox;
    public int DimBox;
    public int record;




    public bool RunFunctionAfterDatabaseRedy { get; set; }

    public static int PlayGameCounter { get; set; }

    private SnapshotCamera snapshotCamera;
    public GameObject gameObjectToSnapshot;
    private Action _FadeAndLoadGame;

    internal static GameLanguage Language = GameLanguage.En;
    private VehicleStatus _vehicleStatus;

    private void Awake()
    {
        if (Time.timeScale == 0f)
            Time.timeScale = 1f;
    }


    private void Start()
    {

        if (instance == null)
        {
            instance = this;


            StartCoroutine(StartAfterDB());
        }

    }

    IEnumerator StartAfterDB()
    {
        if (!Progress.DatabaseIsRedy)
            yield return new WaitUntil(() => !Progress.DatabaseIsRedy);



        AddCoin(Progress._playerInfo.Coin);
        AddDim(Progress._playerInfo.Dim);



        if (Progress._playerInfo.GameMute)
        {
            _FadeCanvase.GetComponent<FadeCanvas>().backMusic.mute = true;
        }
        else
        {
            _FadeCanvase.GetComponent<FadeCanvas>().backMusic.mute = false;
        }


        if (InGame)
        {
            PlayGameCounter++;

            var CarIndexName = Convert.ToInt32(Progress._playerInfo.Last_Vehicle.Split(',')[0]);

            _vehicleStatus = Progress.instance.GetCar(CarIndexName);

            var CarObj = Instantiate(GameManager.instance.CarPrefabs[CarIndexName]);

            CameraFollow.SetFollowTransform(CarObj.GetComponentInChildren<Car>().transform);
            CarObj.GetComponentInChildren<DisplayDistanceText>().SetBestRecord(Progress._playerInfo.Record);

            record = _vehicleStatus.BestRecord;

        }
    }
    internal void AddCoin(int coin)
    {
        CoinBox += coin;
        _CoinStatus.GetComponent<CoinStatus>().NewValue(CoinBox);
    }
    internal void AddDim(int dim)
    {
        DimBox += dim;
        _DimStatus.GetComponent<DiamStatus>().NewValue(DimBox);
    }

    internal void ShowPayDialog(int coin_value, int dim_Value, GameObject gameObject)
    {
        _item_ForPay = gameObject;

        PayDialog.setValue(gameObject, coin_value, dim_Value);

        _payDialogCanvas.SetActive(true);

    }

    internal VehicleStatus getVehicleInDb()
    {
        return Progress.instance.getLastVehile();
    }

    internal void UnlockAndPayStage(StageStatus item_db, int coin_value, int dim_Value)
    {
        CoinBox -= coin_value;
        DimBox -= dim_Value;

        Progress.instance.UnlockAndPayStage(item_db, CoinBox, DimBox);
        PayDialog.instnce.hide();
        _item_ForPay.GetComponent<Stage_item>().UnlockView();

        _CoinStatus.GetComponent<CoinStatus>().NewValue(Progress._playerInfo.Coin);
        _DimStatus.GetComponent<DiamStatus>().NewValue(Progress._playerInfo.Dim);


    }
    internal void UnlockAndPayVehicle(VehicleStatus item_db, int coin_value, int dim_Value)
    {
        CoinBox -= coin_value;
        DimBox -= dim_Value;

        Progress.instance.UnlockAndPayVehicle(item_db, CoinBox, DimBox);
        PayDialog.instnce.hide();
        _item_ForPay.GetComponent<Vehicle_item>().UnlockView();

        _CoinStatus.GetComponent<CoinStatus>().NewValue(Progress._playerInfo.Coin);
        _DimStatus.GetComponent<DiamStatus>().NewValue(Progress._playerInfo.Dim);

    }

    internal void UnlockAndPayTuneNextLevel(VehicleStatus item_db, int coin_value, int dim_Value)
    {
        CoinBox -= coin_value;
        DimBox -=  dim_Value;

        Progress.instance.UnlockAndPayTuneNextLevel(item_db, CoinBox, DimBox);
        PayDialog.instnce.hide();
        Actions.instance.game.vehicle_Item.Item_Db = item_db;

        _item_ForPay.GetComponent<Tune>().UnlockView();

        _CoinStatus.GetComponent<CoinStatus>().NewValue(Progress._playerInfo.Coin);
        _DimStatus.GetComponent<DiamStatus>().NewValue(Progress._playerInfo.Dim);

    }

    internal void BeforPlayGame(Action FadeAndLoadGame)
    {
        try
        {
            _FadeAndLoadGame = FadeAndLoadGame;
            AdsManager.HideBannerAd();

            if (PlayGameCounter == AdsManager.Option_ShowInterstitialPerGame)
            {
                AdsManager.instance.ShowInterstitialAd(OnShowComplate);
            }
            else if (PlayGameCounter == AdsManager.Option_ShowRewardPerGame)
            {
                if (!AdsManager.instance.RewardedAdIsReady())
                {
                    AdsManager.instance.ShowInterstitialAd(OnShowComplate);
                }
                else
                {
                    AdsManager.instance.ShowRewardedAd(OnShowComplate);
                }
            }
            else
            {
                FadeAndLoadGame.Invoke();
            }

            if (PlayGameCounter >= AdsManager.Option_ShowInterstitialPerGame &
                PlayGameCounter >= AdsManager.Option_ShowRewardPerGame)
            {
                PlayGameCounter = 0;
            }
        }
        catch (Exception ex)
        {
            Debug.Log(ex.Message);
            FadeAndLoadGame.Invoke();
        }

    }

    public void OnShowComplate(bool ShowComplete)
    {
        Log.Add("OnShowComplate");
        Progress.instance.AddLogWithApi($"{this.GetType().Name}/{MethodBase.GetCurrentMethod().Name}", logLevel.Info, $"ShowInterstitialAd Complete status :{ShowComplete}");
        _FadeAndLoadGame?.Invoke();
    }

    internal void NextLeve_TuneLevelUserSave(VehicleStatus item_Db)
    {
        Progress.instance.NextLeve_TuneLevelUserSave(item_Db);
        Actions.instance.game.vehicle_Item.Item_Db = item_Db;

    }


    internal void SaveGameData()
    {
        Progress.instance.SaveGameData(Actions.instance.game);

    }

    public void DatabaseReset()
    {

        ClickButtonSound();
        Progress.instance.databaseReset();
        _FadeCanvase.GetComponent<FadeCanvas>().FadeOutThenRun(delegate ()
        {
            SceneManager.LoadScene(0);
        });
    }
    public void ResetMony()
    {

        ClickButtonSound();
        Progress.instance.ResetMony();
        SceneManager.LoadScene(0);

    }
    public void ZeroMony()
    {
        ClickButtonSound();
        Progress.instance.ZeroMony();
        SceneManager.LoadScene(0);

    }

    void OnApplicationFocus(bool hasFocus)
    {
        Silence(!hasFocus);
    }

    void OnApplicationPause(bool isPaused)
    {
        Silence(isPaused);
    }

    private void Silence(bool silence)
    {
        AudioListener.pause = silence;
        // Or / And
        AudioListener.volume = silence ? 0 : 1;
    }

    public void GamOver()
    {


        AdsManager.ShowBannerAd();

        SaveGameMonyAndRecord();

        if (DisplayDistanceText.instance.Record == GameManager.instance.record)
        {
            StartCoroutine(ShotFromCar());
        }
        else
        {
            _gameOverCanvas.SetActive(true);

            Car.instance.Mute(true);
            Time.timeScale = 0f;
        }




    }
    IEnumerator ShotFromCar()
    {
        yield return new WaitForEndOfFrame();


        Car.instance.AddComponent<RectTransform>();
        //yield return new WaitForSeconds(0.5f);

        var targetRect = Car.instance.GetComponent<RectTransform>();

        var corners = new Vector3[4];
        targetRect.GetWorldCorners(corners);
        var _camera = Camera.main;
        var bl = RectTransformUtility.WorldToScreenPoint(_camera, corners[0]);
        var tl = RectTransformUtility.WorldToScreenPoint(_camera, corners[1]);
        var tr = RectTransformUtility.WorldToScreenPoint(_camera, corners[2]);

        var height = tl.y - bl.y;
        var width = tr.x - bl.x;


        width = 672;
        height = 408;

        Vector2 startPoint = new Vector2();

        if (bl.y > tl.y)
            startPoint = tr;
        else
            startPoint = bl;

        Texture2D tex = new Texture2D((int)width, (int)height, TextureFormat.RGB24, false);
        Rect rex = new Rect(startPoint.x - 70, startPoint.y - 105, width, height);
        tex.ReadPixels(rex, 0, 0);
        tex.Apply();

        Sprite NewSprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0, 0), 100.0f, 0, SpriteMeshType.Tight);
        GameOver.ShotImg = NewSprite;

        //var bytes = tex.EncodeToPNG();
        //Destroy(tex);

        //File.WriteAllBytes(Application.persistentDataPath + "//" + fileName, bytes);
        //var path = Application.persistentDataPath + "//" + fileName;

        //var FileData = File.ReadAllBytes(path);

        //var Tex2Dfile = new Texture2D(2, 2);
        //if (Tex2Dfile.LoadImage(FileData))
        //{
        //    //Sprite NewSprite = Sprite.Create(Tex2Dfile, new Rect(0, 0, Tex2Dfile.width, Tex2Dfile.height), new Vector2(0, 0), 100.0f, 0, SpriteMeshType.Tight);
        //GameOver.ShotImg = NewSprite;
        //}


        //var bytes = tex.EncodeToPNG();
        //Destroy(tex);

        //File.WriteAllBytes(Application.dataPath + "//" + fileName, bytes);
        _gameOverCanvas.SetActive(true);

        Car.instance.Mute(true);
        Time.timeScale = 0f;
    }



    public void RestartGame()
    {
        ClickButtonSound();

        BeforPlayGame(delegate ()
        {

            _FadeCanvase.GetComponent<FadeCanvas>().FadeOutThenRun(delegate ()
            {
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            });
        });



    }
    public void ToMainMenu()
    {
        ClickButtonSound();


        _FadeCanvase.GetComponent<FadeCanvas>().FadeOutThenRun(delegate ()
        {
            SceneManager.LoadScene(0);
        });
    }


    public void PuseButton()
    {

        AdsManager.ShowBannerAd();

        ClickButtonSound();

        SaveGameMonyAndRecord();

        _gamePuseCanvas.SetActive(true);

        Car.instance.Mute(true);

        Time.timeScale = 0f;
    }

    public void SaveGameMony()
    {
        Log.Add($"Saveing : Coin = {CoinBox} Dim = {DimBox}");
        Progress.instance.SaveMony(CoinBox, DimBox);
    }

    public void SaveGameMonyAndRecord()
    {
        Log.Add($"Saveing : record = {record} Coin = {CoinBox} Dim = {DimBox}");
        SaveGameMony();
        Progress.instance.SaveCarRecord(record, _vehicleStatus.Name);
    }

    public void ResumeButton()
    {
        AdsManager.HideBannerAd();

        ClickButtonSound();
        _gamePuseCanvas.SetActive(false);
        Car.instance.Mute(false);

        Time.timeScale = 1f;

    }



    public void ClickButtonSound()
    {
        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        Destroy(source_, 5);
        source_.clip = audioClip_ButtonClick;
        source_.volume = 0.5f;
        source_.Play();
    }


    internal static bool CanReward()
    {
        try
        {
            List<RewardLog> rewardLogs = Progress.instance.AllRward();

            var TodayReward = rewardLogs.Where(c => c.Date.LocalDateTime.Date == DateTime.Now.Date).Count();

            //Log.Add($"TodayReward : {TodayReward}");
            if (TodayReward >= AdsManager.Option_GiftRewardPerDay)
            {
                return false;
            }
        }
        catch (Exception ex)
        {
            Log.Add(ex.StackTrace);
            return false;
        }


        return true;

    }



    internal void NewRewardLog()
    {
        Progress.instance.NewRewardLog();
    }

    internal void RemoveAd()
    {
        Progress.instance.ShowAd(false);
        AdsManager.HideBannerAd();
        AdsManager.Option_ShowAd = Progress._playerInfo.ShowAd;
    }

    public void AdOn()
    {
        Progress.instance.ShowAd(true);
        AdsManager.Option_ShowAd = Progress._playerInfo.ShowAd;
    }
    public void AdOff()
    {
        Progress.instance.ShowAd(false);
        AdsManager.HideBannerAd();
        AdsManager.Option_ShowAd = Progress._playerInfo.ShowAd;
    }
}
