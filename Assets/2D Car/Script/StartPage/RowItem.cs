using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RowItem : MonoBehaviour
{
    public string Number;
    public string username;
    public string Score;

    public TMPro.TextMeshProUGUI txt_Number;
    public TMPro.TextMeshProUGUI txt_Name;
    public TMPro.TextMeshProUGUI txt_Score;


    // Start is called before the first frame update
    void Start()
    {
        txt_Number.text = Number;
        txt_Name.text = username;
        txt_Score.text = Score+" m";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
