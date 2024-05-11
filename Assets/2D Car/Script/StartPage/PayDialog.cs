using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PayDialog : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI Text_Pay;

    [SerializeField]
    GameObject _Coin;

    [SerializeField]
    GameObject _Dim;

    public static GameObject item { get;  set; }

    private static int Coin_value;
    private static int Dim_Value;

    public static PayDialog instnce;
    private void Start()
    {
        UIText();
        if (instnce == null)
        {
            instnce = this;
        }
    }

    private void UIText()
    {
        Text_Pay.text = new InterFaceText().textFor(GameManager.Language, TextItem.Tune_Text_Pay, Text_Pay);
    }

    private void OnEnable()
    {
        _Coin.GetComponent<MonyFild>().NewValue(Coin_value);
        _Dim.GetComponent<MonyFild>().NewValue(Dim_Value);
    }

    public void PayClick()
    {
        GameManager.instance.ClickButtonSound();

        var item_Stage_Comp = item.GetComponent<Stage_item>();
        var item_Vehicle_Comp = item.GetComponent<Vehicle_item>();
        var item_Tune_Comp = item.GetComponent<Tune>();

        if (item_Stage_Comp!=null)
        {
            GameManager.instance.UnlockAndPayStage(item_Stage_Comp.Item_Db, Coin_value, Dim_Value);
        }

        if (item_Vehicle_Comp != null)
        {
            GameManager.instance.UnlockAndPayVehicle(item_Vehicle_Comp.Item_Db, Coin_value, Dim_Value);
        }
        if (item_Tune_Comp != null)
        {
            GameManager.instance.UnlockAndPayTuneNextLevel(Actions.instance.game.vehicle_Item.Item_Db, Coin_value, Dim_Value);
        }
    }


    public void hide()
    {
        gameObject.SetActive(false);
    }

    internal static void setValue(GameObject itemObj, int coin_value, int dim_Value)
    {
        item = itemObj;
        Coin_value = coin_value;
        Dim_Value = dim_Value;
       
    }
}
