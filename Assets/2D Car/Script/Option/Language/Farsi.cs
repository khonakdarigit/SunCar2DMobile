using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


public class Farsi
{
    List<ItemTranslate> itemTranslates;
    public Farsi()
    {
        itemTranslates = new List<ItemTranslate>();

        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_CurrntRecord, value = "رکورد این بازی" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_Share_With_Your_Frind, value = "اشتراک گذاری" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_Get_Mor_Mony, value = "پول بیشر بگیر" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Action_Text_Shop_Button, value = "بانک" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Action_Text_Stage_Button, value = "تم زمین" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Action_Text_Vehicle_Button, value = "ماشین" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Action_TextـTuneـButton, value = "تنظیم" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Tune_Text_Tune_Up, value = "تنظیم و افزایش سرعت" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Tune_TextـTune_Price, value = "قیمت تنظیم" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Tune_Text_Pay, value = "پرداخت" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.DisplayDistanceText_Text_Best_Record_Lable, value = "بهترین رکورد" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.Vehicle_item_Text_BestRecord, value = "رکورد" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_MyNewRecord, value = "رکورد جدید من" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_CanBreak, value = "ببین دوستات میتونن :)" });
        itemTranslates.Add(new ItemTranslate() { textItem = TextItem.GameOver_Text_SharingTitle, value = $"سلام\nاین رکرود من توی این بازیه ببین میتونی رکورد منو بشکنی ؟" });


    }

    public string GetItemTranslate(TextItem textItem, TMPro.TextMeshProUGUI textMeshProUGUI)
    {
        var itemTranslate = itemTranslates.FirstOrDefault(c => c.textItem == textItem);
        if (textMeshProUGUI != null)
        {
            textMeshProUGUI.GetComponent<RTLTMPro.RTLTextMeshPro>().PreserveNumbers = false;
        }
        return itemTranslate.value;

    }
}

