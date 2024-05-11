using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Assets._2D_Car.Script
{
    public class CameraFollow : MonoBehaviour
    {
        private static Transform value_followTransform;
        public Transform followTransform;

        float smoothSpeed = 0.220f;

        public static bool isCameraFollow;
        private bool isCameraFollowX;
        private Vector3 velocity = Vector3.zero;

        public float Add_Z_Value { get; set; }

        private Vector3 _Camera_Targetposition;
        public static CameraFollow instance;

        void Start()
        {
            if (instance == null)
            {
                instance = this;
            }

            isCameraFollow = true;
            isCameraFollowX = false;
            followTransform = value_followTransform;
            Car.SetWoldCamera(gameObject.GetComponent<Camera>());
        }



        void Update()
        {
            var xx = Car.instance.rb.velocity.magnitude;
            //Debug.Log($"velocity {Car.instance.rb.velocity} magnitude {Car.instance.rb.velocity.magnitude} velocity.x {Car.instance.rb.velocity.x}  angularDrag {Car.instance.rb.angularDrag} Interia {Car.instance.rb.inertia}");

            bool GoBack = velocity.x < 0 ? true : false;

            Add_Z_Value = (xx / 6.5f) * -1;
            Add_Z_Value = Add_Z_Value < -4f ? -4f : Add_Z_Value;

            if (followTransform != null)
            {
                _Camera_Targetposition = new Vector3(
                    followTransform.position.x + 5f - (!GoBack ? (Add_Z_Value * 2.3f) : 0),
                    followTransform.position.y + 0f,
                    -7f + Add_Z_Value);
            }


        }

        private void FixedUpdate()
        {



            if (followTransform)
            {


                if (isCameraFollow) transform.position = Vector3.SmoothDamp(transform.position, _Camera_Targetposition, ref velocity, smoothSpeed);
                //Debug.Log($"velocity.x {velocity.x} velocity {velocity}");
            }

        }

        internal static void SetFollowTransform(Transform transform)
        {
            if (instance == null)
            {
                value_followTransform = transform;
            }
            else
            {
                instance.followTransform = transform;
            }
        }
    }
}