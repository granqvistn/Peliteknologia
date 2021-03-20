using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{
   

    // Update is called once per frame
    // Liikutetaan kohdetta ylös käyttäen deltaTimea
    void Update()
    {
        transform.Translate(Vector3.up * Time.deltaTime * 1.0f);
    }
}
