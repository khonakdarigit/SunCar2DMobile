using Assets._2D_Car.Script.Models;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assets._2D_Car.Script
{
    public class Car : MonoBehaviour
    {
        public static Car instance;



        public Rigidbody2D rb;

        [SerializeField]
        float speed = 75;
        float fullTuneSpeed;

        public Axle[] axles;

        GameObject CarPedal_Gas;
        GameObject CarPedal_Brack;

        public GameObject Canvas_CarOption;

        public static Camera static_Canvas_CarOption_WorldCamera { get; set; }
        public VehicleStatus ItemDb { get; set; }

        [System.Serializable]
        public class Axle
        {
            public Rigidbody2D wheel;
            public float speedMultiplier;
            public WheelJoint2D wheelJoint2;
        }

        private void Awake()
        {
            if (instance == null)
            {
                instance = this;
            }

            if (static_Canvas_CarOption_WorldCamera)
            {
                Canvas_CarOption.GetComponent<Canvas>().worldCamera = static_Canvas_CarOption_WorldCamera;
            }

            CarPedal_Gas = Canvas_CarOption.GetComponent<CarOption>().pedal_Gas;
            CarPedal_Brack = Canvas_CarOption.GetComponent<CarOption>().pedal_Back;

            CarPedal_Gas.GetComponent<CarPedal>().onMouse.AddListener(OnGas);
            CarPedal_Brack.GetComponent<CarPedal>().onMouse.AddListener(OnBrake);

            ItemDb = GameManager.instance.getVehicleInDb();

            fullTuneSpeed = speed * 2.5f;
            speed += ((fullTuneSpeed - speed) / 8) * ItemDb.TuneLevelUserSave;
            
        }

        public void OnGas()
        {
            SetTorque(-speed);
        }

        public void OnBrake()
        {
            SetTorque(speed);
        }

        private void Update()
        {

        }
        void SetTorque(float speed)
        {
            var IsBack = speed > 0;
            var EffectivSpeed = IsBack ? (speed * 60 / 100) : speed;

            foreach (var item in axles)
            {
                var wheelAngularVelocity = item.wheel.angularVelocity;

                Debug.Log(wheelAngularVelocity);

                // freez Wheel and continue when switch front and back
                if ((wheelAngularVelocity < 0 & EffectivSpeed > 0) ||
                    (wheelAngularVelocity > 0 & EffectivSpeed < 0))
                {
                    item.wheel.freezeRotation = true;
                }
                item.wheel.freezeRotation = false;

                // chack for max Torque (nax Torque is speed * 100)
                if ((wheelAngularVelocity < 0 ? wheelAngularVelocity * -1 : wheelAngularVelocity) <
                    (speed < 0 ? speed * -1 : EffectivSpeed) * 7)
                {
                    item.wheel.AddTorque(speed * item.speedMultiplier * Time.deltaTime);
                }
            }
        }


        /// <summary>
        /// for gas sound effect
        /// </summary>
        /// <returns></returns>
        public float GetVelocityMagnitudeForCarSound()
        {

            if (CarPedal.PedalDown)
            {

                var val = axles[0].wheel.angularVelocity < 0 ? axles[0].wheel.angularVelocity * -1 : axles[0].wheel.angularVelocity;
                return val;
            }
            else
            {
                return 0;
            }

        }

        public float GetVelocityMagnitudeForSpeedBox()
        {


            var val = axles[0].wheel.angularVelocity < 0 ? axles[0].wheel.angularVelocity * -1 : axles[0].wheel.angularVelocity;
            return val;


        }

        public void Mute(bool IsMute)
        {
            var x = GetComponent<CarSfxHandler>();
            x.CarMute(IsMute);
        }





        internal void FixPosition(bool IsFix)
        {
            if (IsFix)
            {
                GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
            }
            else
            {
                GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
            }
        }


        public static void SetWoldCamera(Camera camera)
        {
            if (instance == null)
            {
                static_Canvas_CarOption_WorldCamera = camera;
            }
            else
            {
                instance.Canvas_CarOption.GetComponent<Canvas>().worldCamera = camera;
            }
        }

    }
}