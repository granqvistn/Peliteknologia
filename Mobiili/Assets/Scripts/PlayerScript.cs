using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour
{
    public float speed = 5.0f; //Eteenpäin kuljettava nopeus
    private CharacterController characterController; //Character controller komponentti
    private float horizontalInput; //Vakio suunta
    private float suunta = 0; //Gyroskoopin määrittelemä suunta
    

    //Kun peli alkaa
    void Start()
    {
        Input.gyro.enabled = true; //Otetaan gyroskooppin syöttö käyttöön
        characterController = GetComponent<CharacterController>(); //Otetaan character controller käyttöön
    }

    // Ei riippuvainen frameista
    void FixedUpdate()
    {
        Move();        
    }

    //Liikkeen ohjaus
    private void Move()
    {
        horizontalInput = 1; //Eteenpäin liike on aina päällä

        CheckDirection(); //Tarkistetaan gyroskoopin input
        
        
        transform.forward = new Vector3(Mathf.Abs(horizontalInput) - 1, 0, horizontalInput); //Määritellään liikkeen suunta
        characterController.Move(new Vector3(suunta, 0, horizontalInput * speed) * Time.deltaTime); //Liikutetaan laatikkoa
        
    }

    //Gyroskoopin input
    private void CheckDirection()
    {

        if (Input.gyro.rotationRate.z > 2) 
        {
            suunta = -10;
        }

        else if (Input.gyro.rotationRate.z < -2)
        {
            suunta = 10;
        }        
    }
}
