using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Shop : MonoBehaviour
{
    [SerializeField]
    public List<GameObject> Productes;

    internal ShopProduct getProduct(string productId)
    {
        try
        {
            return Productes.FirstOrDefault(c => c.GetComponent<ShopProduct>().Id == productId).GetComponent<ShopProduct>();

        }
        catch (Exception ex)
        {
            Log.Add(ex.StackTrace);
            return null;
        }
    }

    internal string GetProductIdes()
    {
        string Ides = "";
        foreach (GameObject model in Productes)
        {
            Ides += $"{model.GetComponent<ShopProduct>().Id},";
        }

        return Ides;
    }

    internal void SetProductDetile(ShopProduct product, string title, string price, Action<ShopProduct> purchaseProduct)
    {
        try
        {
            var Product = getProduct(product.Id);
            Product.SetProductDetail(title, price, purchaseProduct);
        }
        catch (Exception ex)
        {

            Log.Add($"{ex.Message}\n{ex.StackTrace}");
        }



    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}
