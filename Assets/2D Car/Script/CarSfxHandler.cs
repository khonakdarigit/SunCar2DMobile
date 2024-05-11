using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

namespace Assets._2D_Car.Script
{
    public class CarSfxHandler : MonoBehaviour
    {
        //[Header("Mixers")]
        //public AudioMixer audioMixer;

        [Header("Audio sources")]
        //public AudioSource tiresScreeachingAudioSource;
        public AudioSource engineAudioSource;
        //public AudioSource carHitAudioSource;
        //public AudioSource carJumpAudioSource;
        //public AudioSource carJumpLandingAudioSource;

        //Local variables
        float desiredEnginePitch = 0.5f;
        //float tireScreechPitch = 0.5f;

        //Components
        Car car;

        public bool Mute;

        //Awake is called when the script instance is being loaded.
        void Awake()
        {
            car = GetComponentInParent<Car>();
        }

        // Start is called before the first frame update
        void Start()
        {
            //Example for recording, move this part to any setting script that your game might use. 
            //audioMixer.SetFloat("SFXVolume", 0.5f);
        }

        // Update is called once per frame
        void Update()
        {
            if (!Mute)
            {
                UpdateEngineSFX();
            }

        }

        public void CarMute(bool IsMute)
        {
            Mute = IsMute;
            engineAudioSource.volume = 0;
        }
        void UpdateEngineSFX()
        {
            //Handle engine SFX
            float velocityMagnitude = car.GetVelocityMagnitudeForCarSound();
           
            //Increase the engine volume as the car goes faster
            float desiredEngineVolume = velocityMagnitude * 0.05f;

            //But keep a minimum level so it playes even if the car is idle
            desiredEngineVolume = Mathf.Clamp(desiredEngineVolume, 0.2f, 1.0f);

            engineAudioSource.volume = Mathf.Lerp(engineAudioSource.volume, desiredEngineVolume, Time.deltaTime * 10);

            //To add more variation to the engine sound we also change the pitch
            desiredEnginePitch = velocityMagnitude * 0.2f;
            desiredEnginePitch = Mathf.Clamp(desiredEnginePitch, 0.5f, 2f);
            engineAudioSource.pitch = Mathf.Lerp(engineAudioSource.pitch, desiredEnginePitch, Time.deltaTime * 1.5f);
        }

    }
}