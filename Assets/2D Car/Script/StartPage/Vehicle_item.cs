using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Vehicle_item : MonoBehaviour
{

    public static Vehicle_item LastSelected;

    public GameObject LockPanel;
    [SerializeField]
    public Sprite vehicleImage;
    [SerializeField]
    TMPro.TextMeshProUGUI Text_BestRecord;
    //public UnityEngine.UI.Image ViewVehicleImage;

    [SerializeField] GameObject gameObject_Text_BestRecord_With_Frame;


    public UnityEngine.UI.Text Text_Coin;
    public UnityEngine.UI.Text Text_Dim;

    public int Coin_value;
    public int Dim_Value;
    public int Index;

    public bool ItemInCenterAndSelected { get; set; }
    public VehicleStatus Item_Db { get; set; }


    // Start is called before the first frame update
    void Start()
    {



        UIText();
    }

    private void UIText()
    {
        Text_Coin.text = Helper.ToMonyStringFormat(Coin_value);
        Text_Dim.text = Helper.ToMonyStringFormat(Dim_Value);

    }

    internal void FillItemDBAndUnlockViewCheck()
    {
        Item_Db = Progress._vehicleStatus.FirstOrDefault(c => c.Name == Index.ToString());

        Text_BestRecord.text = $"{new InterFaceText().textFor(GameManager.Language, TextItem.Vehicle_item_Text_BestRecord, Text_BestRecord)} : {Item_Db.BestRecord}m";


        LockPanel.SetActive(Item_Db.Lock);
        gameObject_Text_BestRecord_With_Frame.SetActive(!Item_Db.Lock);

    }


    public void OnClick()
    {
        GameManager.instance.ClickButtonSound();

        if (Item_Db.Lock &
            Progress._playerInfo.Coin >= Coin_value &
            Progress._playerInfo.Dim >= Dim_Value)
        {
            GameManager.instance.ShowPayDialog(Coin_value, Dim_Value, gameObject);
        }
    }

    internal void UnlockView()
    {
        LockPanel.SetActive(Item_Db.Lock);
        gameObject_Text_BestRecord_With_Frame.SetActive(!Item_Db.Lock);

        Vehicles.instance.Selected_Vehicle(gameObject);

    }

    private void FixedUpdate()
    {



        if (gameObject.transform.position.x > -4 &
            gameObject.transform.position.x < 4 &
            !ItemInCenterAndSelected)
        {
            Reset(LastSelected);

            ItemInCenterAndSelected = true;
            if (Vehicles.instance != null & Item_Db != null)
            {
                Vehicles.instance.Selected_Vehicle(gameObject);
            }
            var image = gameObject.GetComponent<UnityEngine.UI.Image>();

            image.rectTransform.sizeDelta = new Vector2(650f, 400f);
            //stageImage.rectTransform.sizeDelta = new Vector2(stageImage.rectTransform.sizeDelta.x + ChangeSizeValue, stageImage.rectTransform.sizeDelta.y + ChangeSizeValue);
            image.color = new Color(0f, 0.823f, 0.415f, 1);
            LastSelected = this;
        }

    }

    private void Reset(Vehicle_item lastSelected)
    {
        if (lastSelected != null)
        {
            var image = lastSelected.GetComponent<UnityEngine.UI.Image>();


            image.rectTransform.sizeDelta = new Vector2(540, 320);
            //lastSelected.stageImage.rectTransform.sizeDelta = new Vector2(lastSelected.stageImage.rectTransform.sizeDelta.x - ChangeSizeValue, lastSelected.stageImage.rectTransform.sizeDelta.y - ChangeSizeValue);
            image.color = Color.white;

            lastSelected.ItemInCenterAndSelected = false;
        }

    }



}
