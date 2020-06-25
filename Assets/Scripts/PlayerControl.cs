using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour
{
    public Rigidbody rdb;
    public PhotonView pview;
    Vector3 playercommand,playertorque;
    public float motorpower=100;
    // Start is called before the first frame update
    void Start()
    {
        if (!pview.IsMine)
        {
            enabled = false;
        }
        else
        {
            Camera.main.SendMessage("SetTarget", gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        playercommand=new Vector3(0, 0, Input.GetAxis("Vertical"));
        playertorque = new Vector3(0, Input.GetAxis("Horizontal"), 0);
    }
    private void FixedUpdate()
    {
        rdb.AddRelativeForce(playercommand * motorpower);
        rdb.AddTorque(playertorque * motorpower);
    }
}
