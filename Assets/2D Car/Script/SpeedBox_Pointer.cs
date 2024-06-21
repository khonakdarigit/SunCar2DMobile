using Assets._2D_Car.Script;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedBox_Pointer : MonoBehaviour
{
    public float SpeedPointerPresent;

    [SerializeField]
    SpeedBoxType speedBoxType;
    private Rigidbody2D rb;

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        switch (speedBoxType)
        {
            case SpeedBoxType.BOOST:
                float Bv = Car.instance.GetVelocityMagnitudeForSpeedBox() * 0.01f;
                float BvNormal = Mathf.Clamp(Bv, 0f, 100f);
                SpeedPointerPresent = BvNormal;
                break;
            case SpeedBoxType.RPM:
                float Rpm = Car.instance.GetVelocityMagnitudeForCarSound() * 0.05f;
                float RpmNormal = Mathf.Clamp(Rpm, 0f, 100f);
                SpeedPointerPresent = RpmNormal;
                break;
            default:
                break;
        }

        PointerPosition();
    }

    private void PointerPosition()
    {
        float Z = 120 - SpeedPointerPresent * 2.4f;
        Quaternion b = Quaternion.Euler(0, 0, Z);


        if (Z == 120 && transform.localRotation.eulerAngles.z >= 200 & transform.localRotation.eulerAngles.z <= 300)
        {
            Z = 120 - 45 * 2.4f;
        }

        if (transform.localRotation.eulerAngles.z >= 60 & transform.localRotation.eulerAngles.z <= 130 &
           SpeedPointerPresent >= 80)
        {
            Z = 120 - 45 * 2.4f;
        }

        if (Z < 240 & Z > 120)
        {
            Z = 240;
        }

        b = Quaternion.Euler(0, 0, Z);


        rb.transform.localRotation = Quaternion.Slerp(transform.localRotation, b, 5 * Time.deltaTime);
    }
}
