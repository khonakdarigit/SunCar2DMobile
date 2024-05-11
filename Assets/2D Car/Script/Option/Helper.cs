using Assets;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Helper
{
    public static string AppSharingLink()
    {
        string link = "";

        switch (StartController.pulishFor)
        {
            case PulishFor.Playe:
                link = "https://play.google.com/store/apps/details?id=" + Application.identifier;
                break;
            case PulishFor.Myket:
                link = "https://myket.ir/app/" + Application.identifier;
                break;
            case PulishFor.Bazar:
                link = "https://cafebazaar.ir/app/" + Application.identifier;
                break;
            case PulishFor.Taptap:
                link = "https://www.taptap.io/app/33629693";
                break;
            default:
                break;
        }
        return link;
    }

    internal static string AppContactUrl()
    {
        string url = "";
        switch (StartController.pulishFor)
        {
            case PulishFor.Playe:
                url = "market://details?id=" + Application.identifier;
                break;
            case PulishFor.Myket:
                url = "myket://comment?id=" + Application.identifier;
                break;
            case PulishFor.Bazar:
                url = "bazaar://details?id=" + Application.identifier;
                break;
            case PulishFor.Taptap:
                url = "https://www.taptap.io/app/33629693";
                break;
            default:
                break;
        }
        return url;
    }

    internal static string ToMonyStringFormat(int coinBox)
    {
        string str = coinBox.ToString("000,000,000,000,000");
        string resStr = TrimText(str);
        return resStr;
    }
    private static string TrimText(string str)
    {
        bool GetStartChar = false;

        string resStr = "0";
        foreach (var item in str)
        {
            if (GetStartChar)
            {
                resStr += item;
            }
            else if (item != '0' && item != ',')
            {
                GetStartChar = true;
                resStr = item.ToString();
            }
        }

        return resStr;
    }
}
