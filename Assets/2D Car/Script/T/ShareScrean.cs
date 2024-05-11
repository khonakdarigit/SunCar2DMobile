using Assets._2D_Car.Script;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.UI;

public class ShareScrean : MonoBehaviour
{
    [SerializeField] UnityEngine.UI.Image imageForShowingShot;
    private string fileName="gameObjectShot.png";

    public void TakeShotClick(GameObject gameObject)
    {
        StartCoroutine(ShotFromGameObject(gameObject, imageForShowingShot, fileName));
    }

    IEnumerator ShotFromGameObject(GameObject gameObject,Image imageForShowingShot,string fileName)
    {
        yield return new WaitForEndOfFrame();

        if (gameObject.GetComponent<RectTransform>() == null)
            gameObject.AddComponent<RectTransform>();

        var targetRect = gameObject.GetComponent<RectTransform>();

        var corners = new Vector3[4];
        targetRect.GetWorldCorners(corners);
        
        var _camera = Camera.main;
        var bl = RectTransformUtility.WorldToScreenPoint(_camera, corners[0]);
        var tl = RectTransformUtility.WorldToScreenPoint(_camera, corners[1]);
        var tr = RectTransformUtility.WorldToScreenPoint(_camera, corners[2]);

        var height = tl.y - bl.y;
        var width = tr.x - bl.x;

        //If the desired object is rotated or reversed, the starting point of the photo will change
        Vector2 startPoint = new Vector2();
        if (bl.y > tl.y)
            startPoint = tr;
        else
            startPoint = bl;

        Texture2D tex = new Texture2D((int)width, (int)height, TextureFormat.RGB24, false);
        Rect rex = new Rect(startPoint.x, startPoint.y, width, height);
        tex.ReadPixels(rex, 0, 0);
        tex.Apply();

        // Show Image on
        Sprite NewSprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0, 0), 100.0f, 0, SpriteMeshType.Tight);
        imageForShowingShot.sprite = NewSprite;


        // Save File
        var bytes = tex.EncodeToPNG();
        //Destroy(tex);

        string fullpath = $"{Application.persistentDataPath}/{fileName}";
        File.WriteAllBytes(fullpath, bytes);
        
        Debug.Log(fullpath);

        NativeShare nativeShare = new NativeShare();
        nativeShare.AddFile(fullpath);
        nativeShare.SetText("MyText.....");
        nativeShare.Share();
    }
}
