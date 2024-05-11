using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScorllPanel : MonoBehaviour
{
    public ScrollRect scrollRect;

    public float horizontalNormalizedPosition;

    [SerializeField]
    public bool ShowCeterItems;
    // Start is called before the first frame update
    void Start()
    {
        if (!ShowCeterItems)
        {
            scrollRect = GetComponent<ScrollRect>();

            scrollRect.content.GetComponent<HorizontalLayoutGroup>().CalculateLayoutInputVertical();
            scrollRect.content.GetComponent<ContentSizeFitter>().SetLayoutVertical();

            scrollRect.horizontalNormalizedPosition = horizontalNormalizedPosition;
        }

    }

    public IEnumerator FixSize()
    {
        if (!ShowCeterItems)
        {
            yield return new WaitForSecondsRealtime(0.2F);

            scrollRect.content.GetComponent<HorizontalLayoutGroup>().CalculateLayoutInputVertical();
            scrollRect.content.GetComponent<ContentSizeFitter>().SetLayoutVertical();
            scrollRect.horizontalNormalizedPosition = horizontalNormalizedPosition;
        }
    }

    public float Get_ScrolPosition()
    {
        return scrollRect.horizontalNormalizedPosition;
    }
    public void Set_ScrolPosition(float position)
    {
        if (scrollRect != null)
        {
            scrollRect.content.GetComponent<HorizontalLayoutGroup>().CalculateLayoutInputVertical();
            scrollRect.content.GetComponent<ContentSizeFitter>().SetLayoutVertical();

            scrollRect.horizontalNormalizedPosition = position;
        }

        horizontalNormalizedPosition = position;
    }


}
