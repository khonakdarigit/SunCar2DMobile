using AdiveryUnity;
using System;
using System.Collections;
using UnityEngine;

public class AdiveryInit : MonoBehaviour
{
    private Action<bool> _onShowComplate;

    public static AdiveryInit Instance;
    // Start is called before the first frame update
    void Start()
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

        Log.Add($"AdiveryInit AdsManager.ShowAd : {AdsManager.Option_ShowAd} AdsManager.InterstitialAd : {AdsType.Adivery.ToString()}");
        if (AdsManager.Option_ShowAd)
        {

            if (Instance == null)
            {
                try

                {
                    DontDestroyOnLoad(this);


                    string APP_ID = "3a8f30cc-2885-4dab-9357-cded33401b9e";
                    Adivery.Configure(APP_ID);
                    Instance = this;

                    //bannerAdLoad();
                    //RewardedAdInit();
                    InterstitialInit();
                }
                catch (Exception ex)
                {

                    Log.Add($"{ex.Message}\n{ex.StackTrace}");
                }

            }
        }
    }
    #region Interstitial
    string Interstitial_PLACEMENT_ID = "1b2c34d3-e495-4e44-9f0b-11c42a32b91b";

    static AdiveryListener InterstitialListener;

    public void InterstitialInit()
    {
        InterstitialListener = new AdiveryListener();

        InterstitialListener.OnError += Interstitial_OnError;
        InterstitialListener.OnInterstitialAdLoaded += OnInterstitialAdLoaded;
        InterstitialListener.OnInterstitialAdClosed += OnInterstitialAdClosed;
        Adivery.AddListener(InterstitialListener);
        Adivery.PrepareInterstitialAd(Interstitial_PLACEMENT_ID);

    }

    private void OnInterstitialAdClosed(object sender, string e)
    {
        _onShowComplate?.Invoke(true);
    }

    private void Interstitial_OnError(object sender, AdiveryError error)
    {
        Log.Add("placement: " + error.PlacementId + " error: " + error.Reason);
    }

    public void OnInterstitialAdLoaded(object caller, string placementId)

    {
        Log.Add("OnInterstitialAdLoaded");
        // Interstitial ad loaded
    }

    public void ShowInterstitialAd(Action<bool> onShowComplate)
    {
        _onShowComplate = onShowComplate;
        if (Adivery.IsLoaded(Interstitial_PLACEMENT_ID))
        {
            Log.Add("ShowInterstitialAd");
            Adivery.Show(Interstitial_PLACEMENT_ID);
        }
        else
        {
            Log.Add("Not Loaded InterstitialAd");

            _onShowComplate?.Invoke(false);
        }
    }

    #endregion

    #region BannerAd
    static string bannerPlacement = "166b446e-0a39-47ee-9138-105c8c3ea2ed";
    static BannerAd bannerAd;

    public void bannerAdLoad()
    {
        try
        {
            bannerAd = new BannerAd(bannerPlacement, BannerAd.TYPE_BANNER, BannerAd.POSITION_BOTTOM);
            bannerAd.OnAdLoaded += OnBannerAdLoaded;
            bannerAd.OnError += BannerAd_OnError;
            bannerAd.LoadAd();
        }
        catch (Exception ex)
        {

            Log.Add($"bannerAdLoad : {ex.Message}\n{ex.StackTrace}");
        }

    }

    private void BannerAd_OnError(object sender, string e)
    {
        Debug.Log(e);
    }

    public void OnBannerAdLoaded(object caller, EventArgs args)
    {
        if (!GameManager.instance.InGame)
        {
            ShowBannerAd();
        }
        else
        {
            HideBannerAd();
        }

    }

    internal void ShowBannerAd()
    {
        if (bannerAd != null)
        {
            try
            {
                bannerAd.Show();
            }
            catch (Exception ex)
            {
                Log.Add(ex.StackTrace);
                Debug.LogError(ex);
            }
        }
    }
    internal void HideBannerAd()
    {
        if (bannerAd != null)
        {
            bannerAd.Hide();
        }
    }
    #endregion

    #region RewardedAd
    static string rewardedPlacement = "625923cb-679f-4e4a-9a85-bda3bc9ed9f1";

    static AdiveryListener listener_Rewarded;

    public void RewardedAdInit()
    {
        try
        {
            Adivery.PrepareRewardedAd(rewardedPlacement);

            listener_Rewarded = new AdiveryListener();

            listener_Rewarded.OnError += Rewarded_OnError;
            listener_Rewarded.OnRewardedAdLoaded += OnRewardedLoaded;
            listener_Rewarded.OnRewardedAdClosed += OnRewardedClosed;

            Adivery.AddListener(listener_Rewarded);
        }
        catch (Exception ex)
        {

            Log.Add($"RewardedAdInit : {ex.Message}\n{ex.StackTrace}");
        }

    }

    public void OnRewardedLoaded(object caller, string placementId)
    {
        Debug.Log($"Rewarded ad loaded {placementId}");
        // Rewarded ad loaded
    }
    static Action _afterRewarded;
    private bool _rewarToUser;

    public void OnRewardedClosed(object caller, AdiveryReward reward)
    {
        // Check if User should receive the reward
        if (reward.IsRewarded)
        {
            _onShowComplate.Invoke(true);
            // getRewardAmount(reward.PlacementId); // Implrement getRewardAmount yourself
        }
        else
        {
            _onShowComplate.Invoke(false);
        }
    }

    public void Rewarded_OnError(object caller, AdiveryError error)
    {
        _afterRewarded.Invoke();
        Debug.Log("placement: " + error.PlacementId + " error: " + error.Reason);
    }

    public void ShowRewardedAd(Action<bool> onShowComplate)
    {
        _onShowComplate = onShowComplate;
        if (Adivery.IsLoaded(rewardedPlacement))
        {
            try
            {
                Adivery.Show(rewardedPlacement);
            }
            catch (Exception ex)
            {
                Log.Add(ex.StackTrace);
                Debug.LogError(ex);
            }
        }
        else
        {
            //AdsManager.instance.OnFailShowRewardedAd();
        }
    }

    internal bool RewardedAdIsReady()
    {
        if (Adivery.IsLoaded(rewardedPlacement))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    #endregion


}
