using RTLTMPro;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;

[Serializable]
public class ShopProduct : MonoBehaviour
{
    public string Id;
    public string Title;
    public string Price;
    public int Coin;
    public int Dim;

    [SerializeField]
    RTLTextMeshPro txt_tile;
    [SerializeField]
    RTLTextMeshPro txt_Price;
    [SerializeField]
    GameObject item;
    [SerializeField]
    GameObject button;

    Action<ShopProduct> onSelect;
    // Start is called before the first frame update
    void Start()
    {
    }


    internal void SetProductDetail(string title, string price, Action<ShopProduct> purchaseProduct)
    {
        try
        {
            Title = title;
            Price = price;

            //txt_Price.text = Title;
            //txt_tile.text = Price;

            item.GetComponent<UnityEngine.UI.Button>().interactable = true;
            button.SetActive(true);
            onSelect= purchaseProduct;
        }
        catch (Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }

    }

    public void OnClick()
    {
        onSelect?.Invoke(this);
    }
}
