using Bazaar.Data;
using Bazaar.Poolakey;
using Bazaar.Poolakey.Data;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net.WebSockets;
using Unity.VisualScripting;
using UnityEngine;

public class CaffeBazar_In_Pu : MonoBehaviour
{
    [SerializeField]
    GameObject Shop;
    static Shop _Shop;
    private Payment payment;

    // Start is called before the first frame update
    void Start()
    {
        if (StartController.pulishFor == Assets.PulishFor.Bazar)
        {
            try
            {
                _Shop = Shop.GetComponent<Shop>();

                SecurityCheck securityCheck = SecurityCheck.Enable("MIHNMA0GCSqGSIb3DQEBAQUAA4G7ADCBtwKBrwDDK7MgnvkBYhA4rYSFwxkbeZht03b/zVnMRidXXXllTsdPokvwMVRAbTo8Ly61TFr45Avm6fGINK6kYZ7NENali6/f42UTV8E3JzNffenCH8JSF3aOg6BR9CAf9DtVx2G+vsIZmCUWEmEHvDyVYPqlggoKoy1RsD3w82rpqOsjq0KGRNrc4O2HsPfyMrfecoTo0hQWHqwfSa4MSBAvyBCRf7fY8kOiIkJqpN+VfDUCAwEAAQ==");
                PaymentConfiguration paymentConfiguration = new PaymentConfiguration(securityCheck);
                payment = new Payment(paymentConfiguration);
                Connect();
            }
            catch (System.Exception ex)
            {

                Log.Add($"{ex.Message}\n{ex.StackTrace}");
            }
        }
    }
    private void Connect()
    {
        _ = payment.Connect(OnPaymentConnect);
    }
    void OnPaymentConnect(Result<bool> result)
    {
        GetSkuDetails();
        GetUserPurchases();
    }

    private void GetUserPurchases()
    {
        _ = payment.GetPurchases(SKUDetails.Type.all, OnReceivePurchases);
    }
    void OnReceivePurchases(Result<List<PurchaseInfo>> result)
    {
        Log.Add($"{result.message}, {result.stackTrace}");
        if (result.status == Status.Success)
        {
            foreach (var purchase in result.data)
            {
                Log.Add(purchase.ToString());
                // اگه محصول مصرف نشده بود
            }
        }
    }


    void GetSkuDetails()
    {
        string ProductesIdes = _Shop.GetProductIdes();
        _ = payment.GetSkuDetails(ProductesIdes, SKUDetails.Type.all, OnReceiveSkuDetails);

    }
    void OnReceiveSkuDetails(Result<List<SKUDetails>> result)
    {
        Log.Add($"{result.message}, {result.stackTrace}");
        if (result.status == Status.Success)
        {
            foreach (var sku in result.data)
            {
                Log.Add(sku.sku.ToString());
                var Product = _Shop.getProduct(sku.sku);
                if (Product != null)
                {
                    _Shop.SetProductDetile(Product, sku.title, sku.price, PurchaseProduct);
                }
            }
        }
    }

    public void PurchaseProduct(ShopProduct product)
    {
        _ = payment.Purchase(product.Id, SKUDetails.Type.inApp, OnPuschaseStart, OnPuschaseComplete, "PAYLOAD");

    }

    void OnPuschaseStart(Result<PurchaseInfo> result)
    {
        Log.Add("OnPuschaseStart");
    }
    void OnPuschaseComplete(Result<PurchaseInfo> result)
    {

        Log.Add($"{result.message}, {result.stackTrace}");
        if (result.status == Status.Success)
        {
            var purchase = result.data;
            Log.Add(purchase.ToString());

            ShopProduct Product = _Shop.getProduct(purchase.productId);

            GameManager.instance.AddCoin(Product.Coin);
            GameManager.instance.AddDim(Product.Dim);
            GameManager.instance.SaveGameMonyAndRecord();

            if (Product.Id == "80000000500000")
            {
                GameManager.instance.RemoveAd();
            }
            _ = payment.Consume(purchase.purchaseToken, OnConsumeComlete);
        }
    }

    private void OnConsumeComlete(Result<bool> result)
    {
        Log.Add("OnConsumeComlete");
    }

    void OnApplicationQuit()
    {
        payment.Disconnect();
    }

}
