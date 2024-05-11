using Assets._2D_Car.Script;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{

    [SerializeField]
    public CoinType coinType;



    [SerializeField]

    private AudioClip audioClip_GetCoin;

    bool OnGet;


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (!OnGet)
        {
            OnGet = true;
            if (collision.gameObject.GetComponent<Car>() != null ||
                collision.gameObject.GetComponentInParent<Car>() != null)
            {
                if (coinType == CoinType.Coin_Dim)
                {
                    GameManager.instance.AddDim((int)this.coinType);

                }
                else
                {
                    GameManager.instance.AddCoin((int)this.coinType);
                }

                PlayGetCoinSound();
                GetComponent<Animator>().SetTrigger("GetCoin");
                Destroy(gameObject, 3);
            }
        }
    }

    private void PlayGetCoinSound()
    {
        AudioSource source_ = gameObject.AddComponent<AudioSource>();
        Destroy(source_, 5);
        source_.clip = audioClip_GetCoin;
        source_.volume = 0.5f;
        source_.Play();
    }
}
