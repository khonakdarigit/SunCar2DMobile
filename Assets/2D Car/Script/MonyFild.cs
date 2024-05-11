using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonyFild : MonoBehaviour
{
    [SerializeField]
    UnityEngine.UI.Text text;

    internal void NewValue(int mony)
    {
        GetComponent<Animator>().SetTrigger("NewValue");

        text.text = Helper.ToMonyStringFormat(mony);


    }

}
