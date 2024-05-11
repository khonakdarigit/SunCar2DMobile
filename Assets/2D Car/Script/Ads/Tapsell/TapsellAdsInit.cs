using System;
using System.Collections;
using System.Collections.Generic;
using TapsellPlusSDK;
using TapsellPlusSDK.models;
using UnityEngine;

public class TapsellAdsInit : MonoBehaviour
{
    private Action<bool> _onShowComplate;

    public static TapsellAdsInit Instance;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(StartAfterDB());

    }

    IEnumerator StartAfterDB()
    {

        if (AdsManager.Option_ShowAd)
        {

            if (Instance == null)
            {
                if (!Progress.DatabaseIsRedy)
                    yield return new WaitUntil(() => !Progress.DatabaseIsRedy);
                if (GameManager.instance == null)
                    yield return new WaitUntil(() => GameManager.instance == null);
                if (AdsManager.instance == null)
                    yield return new WaitUntil(() => AdsManager.instance == null);

                try

                {
                    DontDestroyOnLoad(this);


                    TapsellPlus.Initialize("ftbsicnmjtibfgkcprldlgebankhlekfgiorrjhlahsdonikoiosjmdnikkjpolshknjfa",
                        adNetworkName =>
                        {
                            Log.Add(adNetworkName + " Initialized Successfully.");

                            Load_BannerAd();
                            Load_RewardedAd();
                            Load_InterstitialAd();
                        },
                        error => Log.Add(error.ToString()));

                    Instance = this;


                }
                catch (Exception ex)
                {

                    Log.Add($"{ex.Message}\n{ex.StackTrace}");
                }

            }
        }
    }

    #region Banner
    private string _StandardBannerAd_responseId;

    private void Load_BannerAd()
    {
        try
        {
            Log.Add("BannerAd_Loading...");
            TapsellPlus.RequestStandardBannerAd("653e77d55b23714f7cbeceda", BannerType.Banner320X50,
                tapsellPlusAdModel =>
                {
                    Log.Add("on response " + tapsellPlusAdModel.responseId);
                    _StandardBannerAd_responseId = tapsellPlusAdModel.responseId;
                    if (!GameManager.instance.InGame)
                        BannerAd_Show();
                },
                error =>
                {
                    Log.Add("Error " + error.message);
                    _StandardBannerAd_responseId = null;
                }
            );
        }
        catch (Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }

    }

    public void BannerAd_Show()
    {
        if (_StandardBannerAd_responseId != null)
        {
            TapsellPlus.ShowStandardBannerAd(_StandardBannerAd_responseId, Gravity.Bottom, Gravity.Center,
                tapsellPlusAdModel =>
                {
                    Log.Add("onOpenAd " + tapsellPlusAdModel.zoneId);
                    if (GameManager.instance.InGame)
                        TapsellPlus.HideStandardBannerAd();
                },
                error =>
                {
                    Log.Add("onError " + error.errorMessage);
                }
            );
        }

    }
    private int Banner_DisplayCounter;

    public void Banner_Display()
    {
        ///Debug.Log("");
        if (_StandardBannerAd_responseId != null)
        {
            TapsellPlus.DisplayStandardBannerAd();
            Banner_DisplayCounter++;
            if (Banner_DisplayCounter > 4)
            {
                Load_BannerAd();
                Banner_DisplayCounter = 0;
            }
        }
    }
    public void Banner_Hide()
    {
        if (_StandardBannerAd_responseId != null)
        {
            TapsellPlus.HideStandardBannerAd();
        }
    }


    #endregion


    #region Interstitial
    private string _InterstitialAd_responseId;

    private void Load_InterstitialAd()
    {
        Log.Add("InterstitialAd_Loading...");

        TapsellPlus.RequestInterstitialAd("653e58205b23714f7cbecebf",

                   tapsellPlusAdModel =>
                   {
                       Debug.Log("on response " + tapsellPlusAdModel.responseId);
                       _InterstitialAd_responseId = tapsellPlusAdModel.responseId;
                   },
                   error =>
                   {
                       _InterstitialAd_responseId = null;
                       Debug.Log("Error " + error.message);
                   }
               );
    }

    public void ShowInterstitialAd(Action<bool> onShowComplate)
    {
        _onShowComplate = onShowComplate;
        if (_InterstitialAd_responseId != null)
        {
            TapsellPlus.ShowInterstitialAd(_InterstitialAd_responseId,

                tapsellPlusAdModel =>
                {
                    Debug.Log("onOpenAd " + tapsellPlusAdModel.zoneId);
                },
                tapsellPlusAdModel =>
                {
                    Debug.Log("onCloseAd " + tapsellPlusAdModel.zoneId);
                    Load_InterstitialAd();
                    _onShowComplate?.Invoke(true);
                },
                error =>
                {
                    Debug.Log("onError " + error.errorMessage);
                    Load_InterstitialAd();
                    _onShowComplate?.Invoke(false);
                }
                );
        }
        else
        {
            _onShowComplate?.Invoke(false);
        }


    }
    #endregion

    #region Rewarded
    private string _RequestRewardedAd_responseId;

    private void Load_RewardedAd()
    {
        Log.Add("RewardedAd_Loading...");

        TapsellPlus.RequestRewardedVideoAd("653e746e5b23714f7cbeced6",

                   tapsellPlusAdModel =>
                   {
                       Debug.Log("on response " + tapsellPlusAdModel.responseId);
                       _RequestRewardedAd_responseId = tapsellPlusAdModel.responseId;
                   },
                   error =>
                   {
                       Debug.Log("Error " + error.message);
                       _RequestRewardedAd_responseId = null;
                   }
               );
    }


    public void ShowRewardedAd(Action<bool> onShowComplate)
    {
        _onShowComplate = onShowComplate;
        TapsellPlus.ShowRewardedVideoAd(_RequestRewardedAd_responseId,

           tapsellPlusAdModel =>
           {
               Log.Add("onOpenAd " + tapsellPlusAdModel.zoneId);
           },
           tapsellPlusAdModel =>
           {
               Log.Add("onRewardedAd " + tapsellPlusAdModel.zoneId);
           },
           tapsellPlusAdModel =>
           {
               Log.Add("onCloseAd " + tapsellPlusAdModel.zoneId);
               Load_RewardedAd();
               _onShowComplate?.Invoke(true);
           },
           error =>
           {
               Log.Add("onError " + error.errorMessage);
               Load_RewardedAd();
               _onShowComplate?.Invoke(false);
           }
       );

    }

    internal bool RewardedAdIsReady()
    {
        return _RequestRewardedAd_responseId == null ? false : true;
    }

    #endregion
}
