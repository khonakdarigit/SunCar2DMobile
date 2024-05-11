using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FuleController : MonoBehaviour
{
    public static FuleController instance;

    [SerializeField] private Image _fuleImage;
    [SerializeField, Range(0.1f, 5f)] private float _fuleDrainSpeed = 1f;
    [SerializeField] private float _maxFuleAmount = 100f;
    [SerializeField] private Gradient _fuleGradiant;
    private float _currentFuleAmount;

    public bool GameOver;
    private bool Puse;



    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    private void Start()
    {

        _currentFuleAmount = _maxFuleAmount;
        UpdateUI();
    }

    private void Update()
    {
        if (!Puse)
        {
            _currentFuleAmount -= Time.deltaTime * _fuleDrainSpeed;
            UpdateUI();

            if (_currentFuleAmount <= 0 && !GameOver)
            {
                GameOver = true;
                GameManager.instance.GamOver();
            }
        }
    }
    private void UpdateUI()
    {
        _fuleImage.fillAmount = (_currentFuleAmount / _maxFuleAmount);
        _fuleImage.color = _fuleGradiant.Evaluate(_fuleImage.fillAmount);
    }

    public void FillFule()
    {
        _currentFuleAmount = _maxFuleAmount;
        UpdateUI();
    }

    public void PuseGame(bool IsPuse)
    {
        Puse = IsPuse;
    }
}
