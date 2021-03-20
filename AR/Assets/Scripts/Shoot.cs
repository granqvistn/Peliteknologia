using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shoot : MonoBehaviour
{
    public GameObject arCamera;
    public GameObject effect;


    /// <summary>
    /// etsitään ja tuhotaan kohteet käyttäen puhelimen kameraa
    /// </summary>
    public void Shooting()
    {
        RaycastHit hit;

        if (Physics.Raycast(arCamera.transform.position, arCamera.transform.forward, out hit))
        {
            if (hit.transform.name == "Sphere(Clone)" || hit.transform.name == "Sphere2(Clone)" || hit.transform.name == "Sphere3(Clone)")
            {
                Destroy(hit.transform.gameObject);
            }
        }
    }
}
