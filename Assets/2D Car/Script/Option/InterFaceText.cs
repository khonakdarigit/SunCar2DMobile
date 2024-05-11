using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public enum GameLanguage
{
    Fa,
    En
}
public enum TextItem
{
    Vehicle_item_Text_BestRecord,
    GameOver_Text_CurrntRecord,
    GameOver_Text_Share_With_Your_Frind,
    GameOver_Text_Get_Mor_Mony,
    Action_Text_Shop_Button,
    Action_Text_Stage_Button,
    Action_Text_Vehicle_Button,
    Action_TextـTuneـButton,
    Tune_Text_Tune_Up,
    Tune_TextـTune_Price,
    Tune_Text_Pay,
    DisplayDistanceText_Text_Best_Record_Lable,
    GameOver_Text_SharingTitle,
    GameOver_Text_MyNewRecord,
    GameOver_Text_CanBreak
}

public class ItemTranslate
{
    public TextItem textItem;
    public string value;
}

public class InterFaceText
{
    /// <summary>
    /// Translate text item by language
    /// </summary>
    /// <param name="gameLanguage">labguage</param>
    /// <param name="textItem">textitem</param>
    /// <returns>translated text item</returns>
    public string textFor(GameLanguage gameLanguage, TextItem textItem,TMPro.TextMeshProUGUI textMeshProUGUI)
    {
        string TranslateedText = null;
        switch (gameLanguage)
        {
            case GameLanguage.Fa:
                TranslateedText = new Farsi().GetItemTranslate(textItem, textMeshProUGUI);
                break;
            case GameLanguage.En:
                TranslateedText = new English().GetItemTranslate(textItem, textMeshProUGUI);
                break;
            default:
                break;
        }
        return TranslateedText;
    }
}

