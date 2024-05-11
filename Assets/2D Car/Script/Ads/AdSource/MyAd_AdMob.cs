using AdColony;
using GoogleMobileAds.Api;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyAd_AdMob : MonoBehaviour, IAdSource
{
    public static MyAd_AdMob Instance;
    public bool _Initialized;
    private void Start()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(this);
        }
    }


    public void Init()
    {
        StartCoroutine(StartAfterDB());
    }
    IEnumerator StartAfterDB()
    {

        if (!Progress.DatabaseIsRedy)
            yield return new WaitUntil(() => !Progress.DatabaseIsRedy);
        if (GameManager.instance == null)
            yield return new WaitUntil(() => GameManager.instance == null);
        if (AdsManager.instance == null)
            yield return new WaitUntil(() => AdsManager.instance == null);

        try
        {
            Log.Add("Init MyAd_AdMob...");
            MobileAds.Initialize(initStatus =>
            {
                Log.Add("Inited MyAd_AdMob");
                _Initialized = true;
                LoadAds();
            });
        }
        catch (Exception ex)
        {
            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }
    }

    public void LoadAds()
    {
        if (_Initialized)
        {
            if (AdsManager.Option_Ads_Banner_Ad_Type == AdsType.Admob)
                BannerAd_Load();

            if (AdsManager.Option_Ads_Interstitial_Ad_Type == AdsType.Admob)
                InterstitialAd_Load();

            if (AdsManager.Option_Ads_Rewarded_Ad_Type == AdsType.Admob)
                RewardedAd_Load();
        }
    }

    public bool Initialaized()
    {
        return _Initialized;
    }
    public void BannerAd_Load()
    {
        throw new NotImplementedException();
    }

    public void Banner_Display()
    {

    }

    public void Banner_Hide()
    {
    }

    public bool Banner_isReady()
    {
        return false;
    }


    private GoogleMobileAds.Api.InterstitialAd _interstitialAd;
    private Action<bool> _onShowComplateinterstitialAd;

    public void InterstitialAd_Load()
    {
        // Clean up the old ad before loading a new one.
        if (_interstitialAd != null)
        {
            _interstitialAd.Destroy();
            _interstitialAd = null;
        }

        Log.Add("Loading the interstitial ad...");

        // create our request used to load the ad.
        var adRequest = new AdRequest();

        // send the request to load the ad.
        GoogleMobileAds.Api.InterstitialAd.Load("ca-app-pub-1364965618349329/7670153213", adRequest,
            (GoogleMobileAds.Api.InterstitialAd ad, LoadAdError error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Log.Add("interstitial ad failed to load an ad " +
                                   "with error : " + error);
                    return;
                }

                Log.Add("Interstitial ad loaded with response : "
                          + ad.GetResponseInfo().GetResponseId());

                _interstitialAd = ad;
                RegisterEventHandlers(_interstitialAd);
            });
    }

    private void RegisterEventHandlers(GoogleMobileAds.Api.InterstitialAd interstitialAd)
    {
        // Raised when the ad is estimated to have earned money.
        interstitialAd.OnAdPaid += (AdValue adValue) =>
        {
            Debug.Log(String.Format("Interstitial ad paid {0} {1}.",
                adValue.Value,
                adValue.CurrencyCode));
        };
        // Raised when an impression is recorded for an ad.
        interstitialAd.OnAdImpressionRecorded += () =>
        {
            Debug.Log("Interstitial ad recorded an impression.");
        };
        // Raised when a click is recorded for an ad.
        interstitialAd.OnAdClicked += () =>
        {
            Debug.Log("Interstitial ad was clicked.");
        };
        // Raised when an ad opened full screen content.
        interstitialAd.OnAdFullScreenContentOpened += () =>
        {
            Debug.Log("Interstitial ad full screen content opened.");
        };
        // Raised when the ad closed full screen content.
        interstitialAd.OnAdFullScreenContentClosed += () =>
        {
            Debug.Log("Interstitial ad full screen content closed.");
            // Reload the ad so that we can show another as soon as possible.
            InterstitialAd_Closed(true);
        };
        // Raised when the ad failed to open full screen content.
        interstitialAd.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("Interstitial ad failed to open full screen content " +
                           "with error : " + error);
            // Reload the ad so that we can show another as soon as possible.
            InterstitialAd_Closed(false);
        };
    }

    public void InterstitialAd_Closed(bool Status)
    {
        _onShowComplateinterstitialAd?.Invoke(Status);
        InterstitialAd_Load();
    }

    public bool InterstitialAd_IsReady()
    {
        return _interstitialAd != null ? true : false;
    }

    public void InterstitialAd_Show(Action<bool> onShowComplate)
    {
        _onShowComplateinterstitialAd = onShowComplate;
        if (_interstitialAd != null && _interstitialAd.CanShowAd())
        {
            Debug.Log("Showing interstitial ad.");
            _interstitialAd.Show();
        }
        else
        {
            Debug.LogError("Interstitial ad is not ready yet.");
            _onShowComplateinterstitialAd?.Invoke(false);
        }
    }


    public void RewardedAd_Load()
    {
        throw new NotImplementedException();
    }
    public void RewardedAd_Closed()
    {
        throw new NotImplementedException();
    }

    public void RewardedAd_GetReward()
    {
        throw new NotImplementedException();
    }
    public void RewardedAd_Show(Action<bool> onShowComplate)
    {
        throw new NotImplementedException();
    }

    public bool Rewarded_IsReady()
    {
        throw new NotImplementedException();
    }


}
