using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarOption : MonoBehaviour
{
    public GameObject pedal_Gas;
    public GameObject pedal_Back;



    private void OnEnable()
    {

        GetComponent<Canvas>().worldCamera = Camera.main;
        GetComponent<Canvas>().sortingLayerName = "Game";
    }

}
