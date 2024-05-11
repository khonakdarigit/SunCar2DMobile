using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeCanvas : MonoBehaviour
{

    private Animator animator;
    public AudioSource backMusic;

    public Action ActionAfterFadeout;

    private void Start()
    {
        animator = GetComponent<Animator>();
        StartCoroutine(AudioFadeScript.FadeIn(backMusic, 1f));

    }

    public void FadeOutThenRun(Action action)
    {
        StartCoroutine(AudioFadeScript.FadeOut(backMusic, 0.2f));
        animator.SetTrigger("FadeOut");
        ActionAfterFadeout = action;
    }

    public void AfterFadeOut()
    {
        ActionAfterFadeout.Invoke();
    }
}
