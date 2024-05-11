using BazaarInAppBilling;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class IAB_Init : MonoBehaviour
{
    [SerializeField]
    GameObject Shop;
    private Shop _Shop;

    void Start()
    {
        _Shop = Shop.GetComponent<Shop>();


        StoreHandler.instance.InitializeBillingService(InitializeBilling_Error, InitializeBilling_Success);
    }

    private void InitializeBilling_Success()
    {
        Log.Add("InitializeBilling_Success");
        StoreHandler.instance.LoadProductPrices(LoadProductPrices_Error, LoadProductPrices_Success);
    }

    private void InitializeBilling_Error(int arg1, string arg2)
    {
        Log.Add("InitializeBilling_Error : " + arg2);
    }
    private void LoadProductPrices_Success()
    {
        foreach (var item in StoreHandler.instance.products)
        {
            Log.Add($"productId : {item.productId} price : {item.price}");
            var Product = _Shop.getProduct(item.productId);
            if (Product != null)
            {
                _Shop.SetProductDetile(Product, "", item.price, PurchaseProduct);
            }
        }
    }

    private void LoadProductPrices_Error(int arg1, string arg2)
    {
        Log.Add("LoadProductPrices_Error : " + arg2);

    }

    public void PurchaseProduct(ShopProduct product)
    {
        StoreHandler.instance.Purchase(product.Id, ByProduct_Error, ByProduct_Succsess);
    }

    private void ByProduct_Succsess(Purchase purchase, int arg2)
    {
        Log.Add("ByProduct_Succsess : " + purchase.purchaseToken);

        ShopProduct Product = _Shop.getProduct(purchase.productId);

        GameManager.instance.AddCoin(Product.Coin);
        GameManager.instance.AddDim(Product.Dim);
        GameManager.instance.SaveGameMony();

        if (Product.Id == "80000000500000")
        {
            GameManager.instance.RemoveAd();
        }
        StoreHandler.instance.ConsumePurchase(purchase, ConsumePurchase_Error, ConsumePurchase_Succsess);
    }



    private void ByProduct_Error(int arg1, string arg2)
    {
        Log.Add("ByProduct_Error : " + arg2);
    }

    private void ConsumePurchase_Succsess(Purchase purchase, int arg2)
    {
        Log.Add("ConsumePurchase_Succsess");
    }

    private void ConsumePurchase_Error(int arg1, string arg2)
    {
        Log.Add("ConsumePurchase_Error : " + arg2);
    }
}
