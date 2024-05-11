using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stages : MonoBehaviour
{
    public static Stages instance;
    public GameObject selected_Stage;
    public UnityEngine.UI.Image button_Image;
    private void Start()
    {


        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this);

        }
        StartCoroutine(StartAfterDB());



    }


    IEnumerator StartAfterDB()
    {

        if (!Progress.DatabaseIsRedy)
            yield return new WaitUntil(() => !Progress.DatabaseIsRedy);
        //if (Actions.instance == null)
        //    yield return new WaitUntil(() => Actions.instance == null);

        UnlockViewStageFromDatabase();
    }

    public void UnlockViewStageFromDatabase()
    {
        var _stages = GetComponentsInChildren<Stage_item>();
        foreach (var item in _stages)
        {
            item.FillItemDBAndUnlockViewCheck();
        }

        if (Progress._playerInfo.Last_Stage != null)
        {
            var scroll_position = Convert.ToDouble(Progress._playerInfo.Last_Stage.Split(',')[1]);
            GetComponent<ScorllPanel>().Set_ScrolPosition((float)scroll_position);
        }

    }

    internal void Selected_Stage(GameObject gameObject)
    {
        selected_Stage = gameObject;
        if (!gameObject.GetComponent<Stage_item>().Item_Db.Lock)
        {
            button_Image.sprite = gameObject.GetComponent<Stage_item>().stageImage.sprite;
            Actions.instance.Change_Stage_Item(gameObject.GetComponent<Stage_item>(), GetComponent<ScorllPanel>().Get_ScrolPosition());
        }
    }
}
