using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

public class English
{
    List<ItemTranslate> itemTranslates;
    public English()
    {
        itemTranslates = new List<ItemTranslate>();

        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_CurrntRecord, value = "This Game Record" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_Share_With_Your_Frind, value = "Share With Friends" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_Get_Mor_Mony, value = "Get More Mony" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Action_Text_Shop_Button, value = "STORE" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Action_Text_Stage_Button, value = "THEMES" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Action_Text_Vehicle_Button, value = "VEHICLE" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Action_TextـTuneـButton, value = "TUNE" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Tune_Text_Tune_Up, value = "TUNE UP" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Tune_TextـTune_Price, value = "Tune Price" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Tune_Text_Pay, value = "PAY" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.DisplayDistanceText_Text_Best_Record_Lable, value = "Best Record" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Vehicle_item_Text_BestRecord, value = "Record" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_MyNewRecord, value = "MY NEW RECORD" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_CanBreak, value = "Can your friends break your record? :)" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_SharingTitle, value = "Hi\nThis is a game (Sunc Car 2D Mobile) and my record in action hero. Check out how far you go" });

    }


    public string GetItemTranslate(TextItem textItem, TMPro.TextMeshProUGUI textMeshProUGUI)
    {
        var itemTranslate = itemTranslates.FirstOrDefault(c => c.textItem == textItem);
        if (textMeshProUGUI!=null)
        {
            textMeshProUGUI.GetComponent<RTLTMPro.RTLTextMeshPro>().PreserveNumbers = false;
            textMeshProUGUI.GetComponent<RTLTMPro.RTLTextMeshPro>().fontStyle = TMPro.FontStyles.Bold;
        }
      
        return itemTranslate.value;

    }
}
