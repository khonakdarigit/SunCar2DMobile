using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;
namespace Assets._2D_Car.Script
{
    public class CarPedal : MonoBehaviour
    {
        public PedalType pedalType;
        public Sprite defaultGraphic;
        public Sprite pressedGraphic;


        public Image graphicComponent;

        public UnityEvent onMouse;

        public bool isMousDown;
        public static bool PedalDown;


        void Start()
        {
            graphicComponent.sprite = defaultGraphic;
        }


        private void OnMouseDown()
        {
            isMousDown = true;
            graphicComponent.sprite = pressedGraphic;
            PedalDown = true;

            //Car.instance.PressGas(pedalType == PedalType.Break ? true : false);

        }

        private void OnMouseUp()
        {

            isMousDown = false;
            graphicComponent.sprite = defaultGraphic;
            PedalDown = false;

            //Car.instance.PressUpGas();

        }


        private void Update()
        {
            if (isMousDown)
            {
                onMouse.Invoke();
            }
        }


    }
}