using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Tune : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI Text_Tune_Up;
    [SerializeField] TextMeshProUGUI TextـTune_Price;


    public int TuneLevel_Coin_Price;
    public int TuneLevel_Dim_Price;
    public GameObject LevelPriceLableBox;

    // Start is called before the first frame update
    void Start()
    {
        UIText();
    }

    private void UIText()
    {
        Text_Tune_Up.text = new InterFaceText().textFor(GameManager.Language, TextItem.Tune_Text_Tune_Up, Text_Tune_Up);
        TextـTune_Price.text = new InterFaceText().textFor(GameManager.Language, TextItem.Tune_TextـTune_Price, TextـTune_Price);
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnEnable()
    {
        UnlockView();
    }


    public void NextTuneLevel()
    {
        if (Actions.instance.game.vehicle_Item.Item_Db.TuneLevelUserSave < Actions.instance.game.vehicle_Item.Item_Db.TuneLevel)
        {
            GameManager.instance.ClickButtonSound();

            GameManager.instance.NextLeve_TuneLevelUserSave(Actions.instance.game.vehicle_Item.Item_Db);
            UnlockView();
        }

        else if (
            GameManager.instance.CoinBox >= TuneLevel_Coin_Price &
            GameManager.instance.DimBox >= TuneLevel_Dim_Price &
            Actions.instance.game.vehicle_Item.Item_Db.TuneLevel < 8 &
            Actions.instance.game.vehicle_Item.Item_Db.TuneLevel == Actions.instance.game.vehicle_Item.Item_Db.TuneLevelUserSave)
        {
            GameManager.instance.ClickButtonSound();

            GameManager.instance.ShowPayDialog(TuneLevel_Coin_Price, TuneLevel_Dim_Price, gameObject);
        }
    }

    public void LevelDown()
    {
        if (Actions.instance.game.vehicle_Item.Item_Db.TuneLevelUserSave > 0)
        {
            GameManager.instance.ClickButtonSound();

            Progress.instance.LeveDown_TuneLevelUserSave(Actions.instance.game.vehicle_Item.Item_Db);
            UnlockView();
        }
    }

    internal void UnlockView()
    {
        if (BarLevelOption.instance)
        {
            BarLevelOption.instance.ToLevel(Actions.instance.game.vehicle_Item.Item_Db.TuneLevelUserSave);
        }

        if (Actions.instance.game.vehicle_Item.Item_Db.TuneLevelUserSave == Actions.instance.game.vehicle_Item.Item_Db.TuneLevel &
            Actions.instance.game.vehicle_Item.Item_Db.TuneLevel < 8)
        {
            LevelPriceLableBox.SetActive(true);
        }
        else
        {
            LevelPriceLableBox.SetActive(false);
        }
    }
}
