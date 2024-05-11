using Assets._2D_Car.Script;
using Assets._2D_Car.Script.Models;
using Realms;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.Assertions.Must;

public class Progress : MonoBehaviour
{
    private Realm _realm;

    public static PlayerInfo _playerInfo;
    public static List<StageStatus> _stageStatus;
    public static List<VehicleStatus> _vehicleStatus;

    public static bool DatabaseIsRedy;
    public bool Option_WithFullMony = false;

    public static Progress instance;

    private void Start()
    {
        if (instance == null)
        {
            transform.parent = null;

            DontDestroyOnLoad(this);
            DatabaseReady();

            AddLogWithApi($"{this.GetType().Name}/{MethodBase.GetCurrentMethod().Name}", logLevel.Info, "AppStart");

            instance = this;
        }
    }

    public void DatabaseReady()
    {

        var config = new RealmConfiguration { SchemaVersion = 18 };

        _realm = Realm.GetInstance(config);


        try
        {
            _playerInfo = _realm.Find<PlayerInfo>("S2DM");
            _stageStatus = _realm.All<StageStatus>().ToList();
            _vehicleStatus = _realm.All<VehicleStatus>().ToList();
        }
        catch (Exception ex)
        {
            Log.Add(ex.StackTrace);
        }


        if (_playerInfo == null)
        {
            Debug.Log("Database is empty");

            _realm.Write(() =>
            {

                for (int i = 0; i < 7; i++)
                {
                    _realm.Add(new StageStatus() { Name = i.ToString(), Lock = i < 6 ? false : true });
                }

                for (int i = 0; i < 25; i++)
                {
                    _realm.Add(new VehicleStatus() { Name = i.ToString(), Lock = i < 6 ? false : true });
                }

                var playerInfo = new PlayerInfo()
                {
                    UserName = "Player_" + Guid.NewGuid().ToString(),
                    gamerTag = "S2DM",
                    Coin = 0,
                    Dim = 0,
                    Last_Stage = "0,0",
                    Last_Vehicle = "0,0",
                    ShowAd = true
                };

                if (Option_WithFullMony)
                {
                    DateTime dateTime = new DateTime(2023, 11, 1);

                    if (dateTime.AddMonths(2) > DateTime.Now)
                    {
                        playerInfo.Coin = 100000000;
                        playerInfo.Dim = 100000000;
                    }
                }

                _playerInfo = _realm.Add(playerInfo);


            });

            _stageStatus = _realm.All<StageStatus>().ToList();
            Debug.Log($"_stageStatus count : {_stageStatus.Count}");
            _vehicleStatus = _realm.All<VehicleStatus>().ToList();
            Debug.Log($"_vehicleStatus count : {_vehicleStatus.Count}");


            Debug.Log(string.Format("Write {0} _playerInfo in DB", _playerInfo.gamerTag));
        }


        DatabaseIsRedy = true;

    }

    internal VehicleStatus getLastVehile()
    {
        var Index = _playerInfo.Last_Vehicle.Split(',')[0];
        return _vehicleStatus.FirstOrDefault(c => c.Name == Index);
    }

    internal void databaseReset()
    {
        //var Config = _realm.Config;
        //_realm.Dispose();
        _realm.Write(() =>
        {
            _realm.RemoveAll();
        });
        //if (_realm.IsClosed)
        //{
        //    Realm.DeleteRealm(Config);
        //}
        //else
        //{
        //    Debug.Log("Relem is Open");
        //}
        //_realm = Realm.GetInstance(Config);
    }

    internal void ResetMony()
    {
        _realm.Write(() =>
        {
            _playerInfo.Coin = 50000000;
            _playerInfo.Dim = 50000000;

        });
    }

    internal void ZeroMony()
    {
        _realm.Write(() =>
        {
            _playerInfo.Coin = 0;
            _playerInfo.Dim = 0;

        });
    }

    internal void SaveGameData(Game game)
    {
        _realm.Write(() =>
        {

            if (_playerInfo.Last_Stage.Split(',')[0] != game.stage_Item.Index.ToString())
            {
                _playerInfo.Last_Stage = game.stage_Item.Index.ToString() + "," + game.stage_ScrollPosition;
            }


            if (_playerInfo.Last_Vehicle.Split(',')[0] != game.vehicle_Item.Index.ToString())
            {
                _playerInfo.Last_Vehicle = game.vehicle_Item.Index.ToString() + "," + game.vehicle_ScrolPosition;
            }
        });
    }

    internal void UnlockAndPayStage(StageStatus item, int coin_value, int dim_Value)
    {
        _realm.Write(() =>
        {
            _playerInfo.Coin = coin_value;
            _playerInfo.Dim = dim_Value;

            item.Lock = false;
        });
    }
    internal void UnlockAndPayVehicle(VehicleStatus item, int coin_value, int dim_Value)
    {

        _realm.Write(() =>
        {
            _playerInfo.Coin = coin_value;
            _playerInfo.Dim = dim_Value;

            item.Lock = false;
        });
    }

    internal void UnlockAndPayTuneNextLevel(VehicleStatus item, int coin_value, int dim_Value)
    {

        _realm.Write(() =>
        {
            _playerInfo.Coin = coin_value;
            _playerInfo.Dim = dim_Value;

            item.TuneLevel += 1;
            item.TuneLevelUserSave = item.TuneLevel;
        });
    }

    internal void NextLeve_TuneLevelUserSave(VehicleStatus item)
    {

        _realm.Write(() =>
        {
            item.TuneLevelUserSave += 1;
        });
    }

    internal void LeveDown_TuneLevelUserSave(VehicleStatus item)
    {

        _realm.Write(() =>
        {
            item.TuneLevelUserSave -= 1;
        });
    }

    internal void SaveUserName(string text)
    {
        _realm.Write(() =>
        {
            _playerInfo.UserName = text;
        });

        //API.instance.SaveUserName(text);
    }

    internal void setGameMunte(bool gameMute)
    {
        _realm.Write(() =>
        {
            _playerInfo.GameMute = gameMute;
        });
    }

    internal void Save_API_DB_userID(string API_DB_userID)
    {
        _realm.Write(() =>
        {
            _playerInfo.API_DB_userID = API_DB_userID;
        });
    }
    public void SaveMony(int coin, int dim)
    {
        //if (_playerInfo == null)
        //    _playerInfo = new PlayerInfo();
        //string jsonString = JsonUtility.ToJson(_playerInfo);
        //try { SaveExtern(jsonString); } catch (Exception) { }

        try
        {
            //if (record > Convert.ToInt32(_playerInfo.Record))
            //{
            //    _realm.Write(() =>
            //    {
            //        _playerInfo.Record = record;
            //    });
            //}
            if (coin > _playerInfo.Coin)
            {
                _realm.Write(() =>
                {
                    _playerInfo.Coin = coin;
                });
            }
            if (dim > _playerInfo.Dim)
            {
                _realm.Write(() =>
                {
                    _playerInfo.Dim = dim;
                });
            }
            Log.Add($"Saving Complete : {_playerInfo.Coin}");
        }
        catch (Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }

        //API.instance.AddNewScore(DisplayDistanceText.Record);
    }
    public void SetPlayerInfo(string value)
    {
        _playerInfo = JsonUtility.FromJson<PlayerInfo>(value);
    }

    internal void NewRewardLog()
    {
        _realm.Write(() =>
        {
            _realm.Add(new RewardLog() { Date = DateTime.Now });
        });
    }

    internal List<RewardLog> AllRward()
    {
        var allRewards = _realm.All<RewardLog>().ToList();
        return allRewards;
    }

    internal void ShowAd(bool ShowAd)
    {
        _realm.Write(() =>
        {
            _playerInfo.ShowAd = ShowAd;
        });
    }

    internal void AddLogWithApi(string action, logLevel level, string message)
    {
        StartCoroutine(StartAfterAPI(action, level, message));
    }

    private IEnumerator StartAfterAPI(string action, logLevel level, string message)
    {
        if (!API.instance)
            yield return new WaitUntil(() => !API.instance);

        var log = new Assets._2D_Car.Script.Models.Log()
        {
            action = action,
            ip = IPManager.GetLocalIPv4(),
            level = level.ToString(),
            userId = _playerInfo.UserName,
            message = message,
            appName = Application.identifier,
        };

#if DEBUG
        log.level = logLevel.Develop.ToString();
#endif

        API.instance.AddLog(log);
    }

    public void OnApplicationQuit()
    {
        AddLogWithApi($"{this.GetType().Name}/{MethodBase.GetCurrentMethod().Name}", logLevel.Info, "AppEnd");
    }

    internal void SaveCarRecord(int record, string IndexName)
    {
        var Vehicle = _vehicleStatus.FirstOrDefault(c => c.Name == IndexName);

        if (record > Vehicle.BestRecord)
        {
            _realm.Write(() =>
            {
                Vehicle.BestRecord = record;
            });
        }
    }

    internal VehicleStatus GetCar(int IndexName)
    {
        return _vehicleStatus.AsQueryable().FirstOrDefault(c => c.Name == IndexName.ToString());
    }
}
