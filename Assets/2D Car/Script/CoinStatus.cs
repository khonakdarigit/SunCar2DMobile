using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CoinStatus : MonoBehaviour
{
    [SerializeField]
    UnityEngine.UI.Text text;

    // Start is called before the first frame update
    void Start()
    {

    }

    internal void NewValue(int coinBox)
    {
        GetComponent<Animator>().SetTrigger("NewValue");

        text.text = Helper.ToMonyStringFormat(coinBox);
    }


}
