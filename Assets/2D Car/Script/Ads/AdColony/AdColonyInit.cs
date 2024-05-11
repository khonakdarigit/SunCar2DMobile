using AdColony;
using System;
using System.Collections;
using System.Collections.Generic;
using TapsellPlusSDK;
using UnityEngine;
using UnityEngine.Networking.Types;

public class AdColonyInit : MonoBehaviour
{
    private Action<bool> _onShowComplate;
    public static AdColonyInit Instance;

    public string ZoneId_Banner = "vzf9c59488b2904c389d";
    public string ZoneId_Interstitial = "vz3bc9b36efbe0455887";
    public string ZoneId_Rewarded = "vz47dad3447cf744a38b";

    private void Start()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(this);
        }
    }
    // Start is called before the first frame update
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
            string[] zoneIds = new string[] { ZoneId_Banner, ZoneId_Interstitial, ZoneId_Rewarded };
            AdColony.Ads.Configure("app34cd9f9d76744485af", null, zoneIds);

            Log.Add("Initialazed AdColony");
            FullScreanAdLetiner();

            DontDestroyOnLoad(this);

            Instance = this;

            Load_BannerAd();
            Load_InterstitialAd();
            Load_RewardedAd();

        }
        catch (Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }


    }
    private void FullScreanAdLetiner()
    {
        AdColony.Ads.OnRequestInterstitial += (AdColony.InterstitialAd ad) =>
        {
            if (ad.ZoneId == ZoneId_Interstitial)
            {
                Log.Add("AdColony Loaded Interstitial ");
                _InterstitialAd = ad;
                ShowInterstitialAd(null);
            }
            else if (ad.ZoneId == ZoneId_Rewarded)
            {
                Log.Add("AdColony Loaded Rewarded ");
                _RewardedAd = ad;
                ShowRewardedAd(null);
            }
        };

        AdColony.Ads.OnExpiring += (AdColony.InterstitialAd ad) =>
        {
            if (ad.ZoneId == ZoneId_Interstitial)
            {
                Log.Add("AdColony Expiring Interstitial ");
                _InterstitialAd = null;
            }
            else if (ad.ZoneId == ZoneId_Rewarded)
            {
                Log.Add("AdColony Expiring Rewarded ");
                _RewardedAd = null;
            }
            AdColony.Ads.RequestInterstitialAd(ad.ZoneId, null);
        };
    }

    #region BannerAd

    private AdColonyAdView _banner_ad_View;
    public void Load_BannerAd()
    {
        try
        {
            AdColony.Ads.OnAdViewLoaded += (AdColony.AdColonyAdView ad) =>
            {
                Log.Add("OnAdViewLoaded Banner");
                _banner_ad_View = ad;
                if (GameManager.instance.InGame)
                    Banner_Hide();
            };

            AdColony.Ads.OnAdViewFailedToLoad += (AdColony.AdColonyAdView ad) =>
            {
                Log.Add("Banner ad failed to load");
                _banner_ad_View = null;
            };

            Log.Add("AdColonyAdView Loding banner ad ...");
            AdColony.Ads.RequestAdView(ZoneId_Banner, AdColony.AdSize.Banner, AdPosition.Bottom, new AdOptions() { ShowPostPopup = true, ShowPrePopup = true });
        }
        catch (Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }

    }
    public void Banner_Display()
    {
        Log.Add("Show Banner Ad " + _banner_ad_View.Id);
        if (_banner_ad_View != null)
        {
            _banner_ad_View.ShowAdView();
        }
    }
    public void Banner_Hide()
    {
        if (_banner_ad_View != null)
        {
            _banner_ad_View.HideAdView();
        }
    }

    #endregion



    #region Interstitial
    AdColony.InterstitialAd _InterstitialAd = null;

    public void Load_InterstitialAd()
    {
        try
        {
            Log.Add("AdColony LoadInterstitial Ad ... ");
            AdColony.Ads.RequestInterstitialAd(ZoneId_Interstitial, null);
        }
        catch (Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }

    }
    public void ShowInterstitialAd(Action<bool> onShowComplate)
    {
        Log.Add("Show ShowInterstitialAd");

        if (_InterstitialAd != null)
        {
            AdColony.Ads.ShowAd(_InterstitialAd);
            onShowComplate?.Invoke(true);
        }
        else
        {
            onShowComplate?.Invoke(false);
        }
    }

    #endregion

    #region Rewarded
    AdColony.InterstitialAd _RewardedAd = null;

    public void Load_RewardedAd()
    {
        Log.Add("AdColony LoadRewardedAd Ad ... ");
        AdColony.AdOptions adOptions = new AdColony.AdOptions();
        adOptions.ShowPrePopup = true;
        adOptions.ShowPostPopup = true;

        AdColony.Ads.OnRewardGranted += (string zoneId, bool success, string name, int amount) =>
        {
            Log.Add("OnRewardGranted");

            // Grant the reward to the user, or
            // request new state from the game server if using server-to-server callbacks
        };

        AdColony.Ads.RequestInterstitialAd(ZoneId_Rewarded, adOptions);
    }

    public void ShowRewardedAd(Action<bool> onShowComplate)
    {
        Log.Add("ShowRewardedAd");
        _onShowComplate = onShowComplate;
        if (_InterstitialAd != null)
        {
            AdColony.Ads.ShowAd(_InterstitialAd);
            _onShowComplate?.Invoke(true);
        }
        else
        {
            _onShowComplate?.Invoke(false);
        }
    }


    #endregion
}
