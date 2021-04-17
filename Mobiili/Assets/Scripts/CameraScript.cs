using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour
{

    public Transform target; //Mitä kamera seuraa
    public Vector3 offset; //Kameran offset kohteeseen nähden

    private void LateUpdate()
    {
        offset = new Vector3(0, 3, -8);
        transform.position = target.position + offset; //Määritellään kameran position kohteeseen nähden
    }


}
