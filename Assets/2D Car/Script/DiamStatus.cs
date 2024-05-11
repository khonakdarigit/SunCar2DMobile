using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiamStatus : MonoBehaviour
{
    [SerializeField]
    UnityEngine.UI.Text text;

    internal void NewValue(int dimBox)
    {
        GetComponent<Animator>().SetTrigger("NewValue");

        text.text = Helper.ToMonyStringFormat(dimBox);


    }

}
