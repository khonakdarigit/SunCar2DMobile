using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BinoDev : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnEnable()
    {
        AdsManager.HideBannerAd();
    }
    private void OnDisable()
    {
        AdsManager.ShowBannerAd();

    }
    public void Click()

    {
        Application.OpenURL("http://bino.free.nf/");

    }
}
