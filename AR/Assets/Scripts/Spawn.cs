using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour
{

    public Transform[] spawns; 
    public GameObject[] targets;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(StartSpawning());
    }


    /// <summary>
    /// Synnytetään 2sec välein random spawneihin uusi kohde
    /// On mahdollista lisätä useampia kohde objekteja
    /// </summary>
    /// <returns></returns>
    IEnumerator StartSpawning()
    {
        yield return new WaitForSeconds(2);


        int sp = Random.Range(0, 8);

        Instantiate(targets[0], spawns[sp].position, Quaternion.identity);
        

        StartCoroutine(StartSpawning());
    }
    
}
