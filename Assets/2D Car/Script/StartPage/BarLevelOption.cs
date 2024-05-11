using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BarLevelOption : MonoBehaviour
{
    public static BarLevelOption instance;

    public GameObject level_1;
    public GameObject level_2;
    public GameObject level_3;
    public GameObject level_4;
    public GameObject level_5;
    public GameObject level_6;
    public GameObject level_7;
    public GameObject level_8;

    private void Start()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    private void OnEnable()
    {
        ToLevel(Actions.instance.game.vehicle_Item.Item_Db.TuneLevelUserSave);
    }

    public void ToLevel(int Level)
    {
        Rset();
        switch (Level)
        {
            case 1:
                level_1.SetActive(true);
                break;
            case 2:
                level_1.SetActive(true);
                level_2.SetActive(true);
                break;
            case 3:
                level_1.SetActive(true);
                level_2.SetActive(true);
                level_3.SetActive(true);
                break;
            case 4:
                level_1.SetActive(true);
                level_2.SetActive(true);
                level_3.SetActive(true);
                level_4.SetActive(true);
                break;
            case 5:
                level_1.SetActive(true);
                level_2.SetActive(true);
                level_3.SetActive(true);
                level_4.SetActive(true);
                level_5.SetActive(true);
                break;
            case 6:
                level_1.SetActive(true);
                level_2.SetActive(true);
                level_3.SetActive(true);
                level_4.SetActive(true);
                level_5.SetActive(true);
                level_6.SetActive(true);
                break;
            case 7:
                level_1.SetActive(true);
                level_2.SetActive(true);
                level_3.SetActive(true);
                level_4.SetActive(true);
                level_5.SetActive(true);
                level_6.SetActive(true);
                level_7.SetActive(true);
                break;
            case 8:
                level_1.SetActive(true);
                level_2.SetActive(true);
                level_3.SetActive(true);
                level_4.SetActive(true);
                level_5.SetActive(true);
                level_6.SetActive(true);
                level_7.SetActive(true);
                level_8.SetActive(true);
                break;
            default:
                break;
        }
    }

    private void Rset()
    {
        level_1.SetActive(false);
        level_2.SetActive(false);
        level_3.SetActive(false);
        level_4.SetActive(false);
        level_5.SetActive(false);
        level_6.SetActive(false);
        level_7.SetActive(false);
        level_8.SetActive(false);
    }
}
