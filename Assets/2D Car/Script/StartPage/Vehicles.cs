using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Vehicles : MonoBehaviour
{
    public static Vehicles instance;
    public GameObject selected_vehicle;
    public UnityEngine.UI.Image button_Image;
    private void Start()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this);
        }
        StartCoroutine(StartAfterDB());

        //var scroll_position = Convert.ToDouble(Progress.instance._playerInfo.Last_Stage.Split(',')[1]);
        //Actions.instance.panel_Stage.GetComponent<ScorllPanel>().Set_ScrolPosition((float)scroll_position);
    }


    IEnumerator StartAfterDB()
    {

        if (!Progress.DatabaseIsRedy)
            yield return new WaitUntil(() => !Progress.DatabaseIsRedy);
        //if (Actions.instance == null)
        //    yield return new WaitUntil(() => Actions.instance == null);

        UnlockViewVehicleFromDatabase();
    }

    public void UnlockViewVehicleFromDatabase()
    {
        var _vehicles = GetComponentsInChildren<Vehicle_item>().OrderBy(c => c.Index);
        foreach (var item in _vehicles)
        {
            item.FillItemDBAndUnlockViewCheck();
        }

        if (Progress._playerInfo.Last_Vehicle != null)
        {
            var scroll_position = Convert.ToDouble(Progress._playerInfo.Last_Vehicle.Split(',')[1]);
            GetComponent<ScorllPanel>().Set_ScrolPosition((float)scroll_position);
        }

    }

    internal void FillDataFromDatabase()
    {
        throw new NotImplementedException();
    }

    internal void Selected_Vehicle(GameObject gameObject)
    {
        selected_vehicle = gameObject;
        if (!gameObject.GetComponent<Vehicle_item>().Item_Db.Lock)
        {
            button_Image.sprite = gameObject.GetComponent<Vehicle_item>().vehicleImage;
            Actions.instance.Change_vehicle_Item(gameObject.GetComponent<Vehicle_item>(), GetComponent<ScorllPanel>().Get_ScrolPosition());
        }
    }


}
