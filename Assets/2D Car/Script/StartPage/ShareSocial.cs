using Assets;
using System.Collections;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;

public class ShareSocial : MonoBehaviour
{
    string subject;
    string body;
    public string _imagePath;
    private bool isProcessing;
    private bool isFocus;

    void OnApplicationFocus(bool focus)
    {
        isFocus = focus;
    }
    public void OnAndroidTextSharingClick()
    {
        try
        {
            subject = "Sun Car 2D Mobile";

            string body = $"{subject}\nRecord = {Progress._vehicleStatus.AsQueryable().Max(c => c.BestRecord).ToString()}m\n";

            NativeShare nativeShare = new NativeShare();

            nativeShare.SetText($"{body}\n{new InterFaceText().textFor(GameManager.Language, TextItem.GameOver_Text_SharingTitle, null)}\n\nDownload:\n");
            nativeShare.SetUrl(Helper.AppSharingLink());
            nativeShare.Share();

        }
        catch (System.Exception ex)
        {
            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }
      
    }

    IEnumerator ShareAndroidText(string imagePath, string title, string message)
    {
        isProcessing = true;
        // wait for graphics to render
        yield return new WaitForEndOfFrame();

        string screenShotPath = imagePath;
        try
        {
            isProcessing = true;


            NativeShare nativeShare = new NativeShare();
            nativeShare.AddFile(imagePath);
            
            nativeShare.SetTitle(title);
            nativeShare.SetText(message);

            nativeShare.SetCallback(delegate {
                Log.Add("nativeShare.SetCallback");
            });

            nativeShare.Share();

            isProcessing = false;
        }
        catch (System.Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }


        yield return new WaitUntil(() => isFocus);
        isProcessing = false;

    }


}
