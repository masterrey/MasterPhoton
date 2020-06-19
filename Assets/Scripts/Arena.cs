using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arena : MonoBehaviour
{
    public GameObject respawn;
    // Start is called before the first frame update
    void Start()
    {
        PhotonNetwork.Instantiate("TankFree_Blue", respawn.transform.position,respawn.transform.rotation);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
