using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Stage_item : MonoBehaviour
{

    public static Stage_item LastSelected;

    public GameObject LockPanel;
    public UnityEngine.UI.Image stageImage;



    public UnityEngine.UI.Text Text_Coin;
    public UnityEngine.UI.Text Text_Dim;

    public int Coin_value;
    public int Dim_Value;
    public int Index;

    public bool ItemInCenterAndSelected;
    public StageStatus Item_Db;

    //[SerializeField]
    float ChangeSizeValue = 60;

    // Start is called before the first frame update
    void Start()
    {

        Text_Coin.text = Helper.ToMonyStringFormat(Coin_value);
        Text_Dim.text = Helper.ToMonyStringFormat(Dim_Value);
    }

    internal void FillItemDBAndUnlockViewCheck()
    {
        Item_Db = Progress._stageStatus.FirstOrDefault(c => c.Name == Index.ToString());

        if (!Item_Db.Lock)
        {
            LockPanel.SetActive(false);
        }
    }


    public void OnClick()
    {
        GameManager.instance.ClickButtonSound();

        if (Item_Db.Lock &
           GameManager.instance.CoinBox >= Coin_value &
           GameManager.instance.DimBox >= Dim_Value)
        {
            GameManager.instance.ShowPayDialog(Coin_value, Dim_Value, gameObject);
        }
    }

    internal void UnlockView()
    {
        LockPanel.SetActive(false);
        Stages.instance.Selected_Stage(gameObject);

    }

    private void FixedUpdate()
    {



        if (gameObject.transform.position.x > -4 &
            gameObject.transform.position.x < 4 &
            !ItemInCenterAndSelected)
        {
            ResetView(LastSelected);

            ItemInCenterAndSelected = true;
            if (Stages.instance != null & Item_Db != null)
            {
                Stages.instance.Selected_Stage(gameObject);
            }
            var image = gameObject.GetComponent<UnityEngine.UI.Image>();

            image.rectTransform.sizeDelta = new Vector2(650f, 400f);
            //stageImage.rectTransform.sizeDelta = new Vector2(stageImage.rectTransform.sizeDelta.x + ChangeSizeValue, stageImage.rectTransform.sizeDelta.y + ChangeSizeValue);
            image.color = new Color(0f, 0.823f, 0.415f, 1);
            LastSelected = this;
        }

    }

    private void ResetView(Stage_item lastSelected)
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
