using Assets._2D_Car.Script;
using Realms;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DisplayDistanceText : MonoBehaviour
{
    public static DisplayDistanceText instance;
    [SerializeField] private TextMeshProUGUI _distanceText;
    [SerializeField] private TextMeshProUGUI Text_Best_Record;
    [SerializeField] private TextMeshProUGUI Text_Best_Record_Lable;

    private string _Text_Best_Record_Translated;

    private Transform _playerTransform;

    private Vector2 _startPosition;

    public int Record;

    private void Start()
    {
        UIText();

        if (instance == null)
        {
            instance = this;
        }

        _playerTransform = Car.instance.transform;
        _startPosition = _playerTransform.position;
    }

    private void UIText()
    {
        Text_Best_Record_Lable.text = new InterFaceText().textFor(GameManager.Language, TextItem.DisplayDistanceText_Text_Best_Record_Lable, Text_Best_Record_Lable);
        SetBestRecord(GameManager.instance.record);
    }

    private void Update()
    {
        if(_playerTransform!=null)
        {
            Vector2 distance = (Vector2)_playerTransform.position - _startPosition;
            distance.y = 0f;

            if (distance.x < 0)
            {
                distance.x = 0;
            }

            var NewRecord = (int)distance.x;
            if (Progress.instance != null)
            {
                if (NewRecord > Record)
                {
                    Record = NewRecord;
                    _distanceText.text = Record.ToString("F0") + "m";

                    if (Record > GameManager.instance.record)
                    {
                        GameManager.instance.record = Record;
                        SetBestRecord(Record);
                    }
                    //SetBestRecord(Record);
                }
            }
        }
       

    }

    public void SetBestRecord(RealmInteger<int> record)
    {
        Text_Best_Record.text = $"{record}m";
    }
}
