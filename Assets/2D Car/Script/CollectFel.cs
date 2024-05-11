using Assets._2D_Car.Script;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollectFel : MonoBehaviour
{
    public GameObject YouWinCanvas;
    private bool OnGet;

    [SerializeField]

    private AudioClip audioClip_GetCoin;

    private void Start()
    {
        OnGet = false;
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Debug.Log("OnTriggerEnter2D : " + collision.gameObject.name + "  OnGet : " + OnGet);
        if (!OnGet)
        {
            OnGet = true;
            if (collision.gameObject.GetComponent<Car>() != null ||
                collision.gameObject.GetComponentInParent<Car>() != null)
            {
                FuleController.instance.FillFule();
                PlayGetFuleSound();
                GetComponent<Animator>().SetTrigger("GetFuel");
                Destroy(gameObject, 3);
            }
        }
    }

    private void PlayGetFuleSound()
    {
        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        Destroy(source_, 5);
        source_.clip = audioClip_GetCoin;
        source_.volume = 0.5f;
        source_.Play();
    }


    public void GetFuelAnimatinDown()
    {
        if (gameObject.name.Contains("TheEndFule"))
        {
#if UNITY_WEBGL
            Progress.instance.Save();
#endif

            YouWinCanvas.SetActive(true);
            YouWinCanvas.GetComponent<AudioSource>().Play();

            Car.instance.Mute(true);
            Time.timeScale = 0f;
        }

        Destroy(gameObject);
    }
}
