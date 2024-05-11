using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class TopScoreSection : MonoBehaviour
{
    [SerializeField] private GameObject loadingPanel;
    [SerializeField] private GameObject topSocreContent;
    [SerializeField] private GameObject scrollPanel;
    [SerializeField] private GameObject itemPrefab;

    public static TopScoreSection instance;
    internal List<TopScoreViewModel> _topScoreAll;
    internal List<TopScoreViewModel> _topScoreWeek;
    internal List<TopScoreViewModel> _topScoreDay;

    public bool ActiveSection;


    // Start is called before the first frame update
    void Start()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (_topScoreAll != null &&
            _topScoreWeek != null &&
            _topScoreDay != null && !ActiveSection)
        {
            ActiveSection = true;
            loadingPanel.SetActive(false);
            FillContent(_topScoreAll, "TOP SCORE");
        }

    }


    public void Btn_TopScoreAll()
    {
        GameManager.instance.ClickButtonSound();
        FillContent(_topScoreAll, "TOP SCORE");

    }
    public void Btn_TopScoreWeek()
    {
        GameManager.instance.ClickButtonSound();
        FillContent(_topScoreWeek, "TOP SCORE IN WEEK");
    }
    public void Btn_TopScoreDay()
    {
        GameManager.instance.ClickButtonSound();
        FillContent(_topScoreDay, "TOP SCORE IN DAY");
    }

    public void FillContent(List<TopScoreViewModel> topScore, string Header)
    {
        ClearContent();
        if (topScore != null & topScore.Any())
        {

            foreach (var item in topScore)
            {
                var additem = itemPrefab.GetComponent<RowItem>();

                additem.Number = item.number.ToString();
                additem.username = item.username;
                additem.Score = item.score.ToString();

                Instantiate(additem, topSocreContent.transform);
            }

            StartCoroutine(scrollPanel.GetComponent<ScorllPanel>().FixSize());
        }

    }

    private void ClearContent()
    {
        while (topSocreContent.transform.childCount > 0)
        {
            DestroyImmediate(topSocreContent.transform.GetChild(0).gameObject);
        }
    }

    public void FillWithAll()
    {
        //StartController.instance.ButtonClickSound();
        FillContent(_topScoreAll, "TOP SCORE");
    }
}
