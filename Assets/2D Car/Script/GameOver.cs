using Assets._2D_Car.Script;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class GameOver : MonoBehaviour
{

    [SerializeField] TextMeshProUGUI Text_BestRecord;
    [SerializeField] TextMeshProUGUI Text_GameRecord;
    [SerializeField] TextMeshProUGUI Text_Share_With_Your_Frind;
    [SerializeField] TextMeshProUGUI Text_Get_Mor_Mony;
    [SerializeField] TextMeshProUGUI Text_MyNewRecord;
    [SerializeField] TextMeshProUGUI Text_Record;
    [SerializeField] TextMeshProUGUI Text_CanBreak;


    [SerializeField] GameObject Shot;


    public static Sprite ShotImg;

    [SerializeField] UnityEngine.UI.Image Image_ShotImage;

    [SerializeField] private RectTransform targetRect;

    // Start is called before the first frame update
    void Start()
    {
        if (DisplayDistanceText.instance.Record == GameManager.instance.record)
        {
            Shot.SetActive(true);
            Image_ShotImage.sprite = ShotImg;
        }

        UIText();

    }

    private void UIText()
    {


        Text_BestRecord.text = $"{new InterFaceText().textFor(GameManager.Language, TextItem.Vehicle_item_Text_BestRecord, Text_BestRecord)} : {GameManager.instance.record}m";
        Text_GameRecord.text = $"{new InterFaceText().textFor(GameManager.Language, TextItem.GameOver_Text_CurrntRecord, Text_GameRecord)} : {DisplayDistanceText.instance.Record}m";

        Text_Share_With_Your_Frind.text = new InterFaceText().textFor(GameManager.Language, TextItem.GameOver_Text_Share_With_Your_Frind, Text_Share_With_Your_Frind);
        Text_Get_Mor_Mony.text = new InterFaceText().textFor(GameManager.Language, TextItem.GameOver_Text_Get_Mor_Mony, Text_Get_Mor_Mony);

        Text_MyNewRecord.text = $"{new InterFaceText().textFor(GameManager.Language, TextItem.GameOver_Text_MyNewRecord, Text_MyNewRecord)}";
        Text_Record.text = GameManager.instance.record.ToString() + "m";

        Text_CanBreak.text = new InterFaceText().textFor(GameManager.Language, TextItem.GameOver_Text_CanBreak, Text_CanBreak);

    }

    public void ShareShot()
    {
        StartCoroutine(ShotFromCar("ShotShare.png"));


    }


    private IEnumerator ShotFromCar(string fileName)
    {

        yield return new WaitForEndOfFrame();
        try
        {
            var corners = new Vector3[4];
            targetRect.GetWorldCorners(corners);
            var _camera = Camera.main;
            var bl = RectTransformUtility.WorldToScreenPoint(_camera, corners[0]);
            var tl = RectTransformUtility.WorldToScreenPoint(_camera, corners[1]);
            var tr = RectTransformUtility.WorldToScreenPoint(_camera, corners[2]);

            var height = tl.y - bl.y;
            var width = tr.x - bl.x;

            Texture2D tex = new Texture2D((int)width, (int)height, TextureFormat.RGB24, false);
            Rect rex = new Rect(bl.x, bl.y, width, height);
            tex.ReadPixels(rex, 0, 0);
            tex.Apply();

            var bytes = tex.EncodeToPNG();
            //Destroy(tex);

            File.WriteAllBytes(Application.persistentDataPath + "//" + fileName, bytes);


            var path = Application.persistentDataPath + "//" + fileName;

            NativeShare nativeShare = new NativeShare();
            //nativeShare.SetTitle("SetTitle");
            nativeShare.AddFile(path);
            //nativeShare.SetSubject("SetSubject");
            nativeShare.SetText($"{new InterFaceText().textFor(GameManager.Language, TextItem.GameOver_Text_SharingTitle, null)}\n\nDownload:\n");
            nativeShare.SetUrl(Helper.AppSharingLink());
            nativeShare.Share();


        }
        catch (Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }


    }
}
