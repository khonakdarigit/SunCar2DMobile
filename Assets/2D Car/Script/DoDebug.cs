using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class DoDebug : MonoBehaviour
{
    [SerializeField]
    UnityEngine.UI.Image Image_ShotImage;

    // Update is called once per frame
    void Update()
    {

    }

    //public void TaleShot()
    //{
    //    SaveCameraView(Camera.main);
    //    //yield 
    //    ////var ScreenCapture.CaptureScreenshotAsTexture("SomeLevel.png");

    //    //Texture2D snapshot = ScreenCapture.CaptureScreenshotAsTexture();
    //    ////snapshotCamera.TakeObjectSnapshot(Car.instance.gameObject, 498, 301);


    //    //Sprite NewSprite = Sprite.Create(snapshot, new Rect(0, 0, snapshot.width, snapshot.height), new Vector2(0, 0), 100.0f, 0, SpriteMeshType.Tight);

    //   // Image_ShotImage.sprite = NewSprite;
    //}


    [SerializeField] private RectTransform targetRect;
    private Camera _camera;

    private void Start()
    {
        _camera = Camera.main;
    }

    public void TaleShot()
    {

        StartCoroutine(CutSpriteFromScreen("ShotShare.png"));
    }

    private IEnumerator CutSpriteFromScreen(string fileName)
    {
        yield return new WaitForEndOfFrame();

        var corners = new Vector3[4];
        targetRect.GetWorldCorners(corners);
        var bl = RectTransformUtility.WorldToScreenPoint(_camera, corners[0]);
        var tl = RectTransformUtility.WorldToScreenPoint(_camera, corners[1]);
        var tr = RectTransformUtility.WorldToScreenPoint(_camera, corners[2]);

        var height = tl.y - bl.y;
        var width = tr.x - bl.x;

        Texture2D tex = new Texture2D((int)width, (int)height, TextureFormat.RGB24, false);
        Rect rex = new Rect(bl.x, bl.y, width, height);
        tex.ReadPixels(rex, 0, 0);
        tex.Apply();

        Sprite NewSprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), new Vector2(0, 0), 100.0f, 0, SpriteMeshType.Tight);
        Image_ShotImage.sprite = NewSprite;

        var bytes = tex.EncodeToPNG();
        //Destroy(tex);

        File.WriteAllBytes(Application.dataPath + fileName, bytes);
    }

}
