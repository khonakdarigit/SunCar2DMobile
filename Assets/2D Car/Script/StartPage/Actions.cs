using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Actions : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI Text_Shop_Button;
    [SerializeField] TextMeshProUGUI Text_Stage_Button;
    [SerializeField] TextMeshProUGUI Text_Vehicle_Button;
    [SerializeField] TextMeshProUGUI TextـTuneـButton;


    public GameObject panel_Shop;
    public GameObject panel_Stage;
    public GameObject panel_Vehicle;
    public GameObject panel_Tune;

    public GameObject button_Shop;
    public GameObject button_Stage;
    public GameObject button_Vehicle;
    public GameObject button_Tune;
    public GameObject button_Play;

    public static Actions instance;

    public Game game;

    private void Start()
    {
        game = new Game();

        if (instance == null )
        {
            UIText();
            instance = this;
            DontDestroyOnLoad(this);
        }


        StartCoroutine(StartAfterDB());



    }

    private void UIText()
    {
        Text_Shop_Button.text= new InterFaceText().textFor(GameManager.Language, TextItem.Action_Text_Shop_Button, Text_Shop_Button);
        Text_Stage_Button.text = new InterFaceText().textFor(GameManager.Language, TextItem.Action_Text_Stage_Button, Text_Stage_Button);
        Text_Vehicle_Button.text = new InterFaceText().textFor(GameManager.Language, TextItem.Action_Text_Vehicle_Button, Text_Vehicle_Button);
        TextـTuneـButton.text = new InterFaceText().textFor(GameManager.Language, TextItem.Action_TextـTuneـButton, TextـTuneـButton);
    }

    IEnumerator StartAfterDB()
    {
        if (!Progress.DatabaseIsRedy)
            yield return new WaitUntil(() => !Progress.DatabaseIsRedy);

        panel_Stage.GetComponent<Stages>().UnlockViewStageFromDatabase();
        panel_Vehicle.GetComponent<Vehicles>().UnlockViewVehicleFromDatabase();
        //if (Progress.instance._playerInfo.Last_Stage == null)
        //{

        //    //button_Stage.GetComponentsInChildren<UnityEngine.UI.Image>()[2].sprite = panel_Stage.GetComponentInChildren<Stage_item>().stageImage.sprite;
        //    //Change_Stage_Item(panel_Stage.GetComponentInChildren<Stage_item>());
        //}
        //else
        //{
        //    //var index = Convert.ToInt32(Progress.instance._playerInfo.Last_Stage.Split(',')[0]);
        //    var scroll_position = Convert.ToDouble(Progress.instance._playerInfo.Last_Stage.Split(',')[1]);

        //    //button_Stage.GetComponentsInChildren<UnityEngine.UI.Image>()[2].sprite = panel_Stage.GetComponentsInChildren<Stage_item>()[index].stageImage.sprite;
        //    panel_Stage.GetComponent<ScorllPanel>().Set_ScrolPosition((float)scroll_position);
        //}

        //if (Progress._playerInfo.Last_Vehicle == null)
        //{
        //    button_Vehicle.GetComponentsInChildren<UnityEngine.UI.Image>()[1].sprite = panel_Vehicle.GetComponentInChildren<Vehicle_item>().vehicleImage;
        //    Change_vehicle_Item(panel_Vehicle.GetComponentInChildren<Vehicle_item>(), 0);

        //}
        //else
        //{
        var index_Vehicle = Convert.ToInt32(Progress._playerInfo.Last_Vehicle.Split(',')[0]);

        button_Vehicle.GetComponentsInChildren<UnityEngine.UI.Image>()[1].sprite = panel_Vehicle.GetComponentsInChildren<Vehicle_item>()[index_Vehicle].vehicleImage;

        Change_vehicle_Item(
            panel_Vehicle.GetComponentsInChildren<Vehicle_item>()[index_Vehicle],
            float.Parse(Progress._playerInfo.Last_Vehicle.Split(',')[1])
            );

        var index_Stage = Convert.ToInt32(Progress._playerInfo.Last_Stage.Split(',')[0]);

        Change_Stage_Item(
            panel_Stage.GetComponentsInChildren<Stage_item>()[index_Stage],
            float.Parse(Progress._playerInfo.Last_Stage.Split(',')[1])
            );

        //}


    }

    internal void Change_Stage_Item(Stage_item item, float scrolPosition)
    {
        game.stage_Item = item;
        game.stage_ScrollPosition = scrolPosition;
    }
    internal void Change_vehicle_Item(Vehicle_item item, float scrolPosition)
    {
        game.vehicle_Item = item;

        game.vehicle_ScrolPosition = scrolPosition;

    }

    public void button_Shop_Click()
    {
        BeforDoAction();
        Deslect_Panel();
        buttonSelected(button_Shop);
        panel_Shop.SetActive(true);
    }

    public void button_Stage_Click()
    {
        BeforDoAction();
        Deslect_Panel();
        buttonSelected(button_Stage);
        panel_Stage.SetActive(true);

    }

    public void button_Vehicle_Click()
    {

        BeforDoAction();
        Deslect_Panel();
        buttonSelected(button_Vehicle);
        panel_Vehicle.SetActive(true);

    }
    public void button_Tune_Click()
    {

        BeforDoAction();
        Deslect_Panel();
        buttonSelected(button_Tune);
        panel_Tune.SetActive(true);

    }
    public void button_Play_Click()
    {
        try
        {
            GameManager.instance.ClickButtonSound();
            GameManager.instance.SaveGameData();

            GameManager.instance.BeforPlayGame(delegate ()
            {
                GameManager.instance._FadeCanvase.GetComponent<FadeCanvas>().FadeOutThenRun(
                  delegate ()
                  {
                      SceneManager.LoadScene(Actions.instance.game.stage_Item.Index + 1);
                  });
            });
        }
        catch (Exception ex)
        {

            throw;
        }






    }

    private void buttonSelected(GameObject button)
    {
        button.GetComponent<UnityEngine.UI.Image>().color = new Color(0.457f, 0.981f, 1f, 1f);
    }

    private void BeforDoAction()
    {
        GameManager.instance.ClickButtonSound();


        foreach (var item in GetComponentsInChildren<UnityEngine.UI.Image>())
        {
            item.color = Color.white;
        }

    }

    private void Deslect_Panel()
    {
        panel_Shop.SetActive(false);
        panel_Stage.SetActive(false);
        panel_Vehicle.SetActive(false);
        panel_Tune.SetActive(false);
    }

    internal void AfterDatabaseReady()
    {


    }
}
