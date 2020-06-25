﻿using Photon.Pun;
using Photon.Pun.UtilityScripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour
{
    public Rigidbody rdb;
    public PhotonView pview;
    Vector3 playercommand,playertorque;
    public float motorpower=100;
    public MeshRenderer rend;
    // Start is called before the first frame update
    void Start()
    { 
        if (pview.IsMine)
        {
            pview.RPC("ReceiveColor",RpcTarget.AllBuffered, Random.Range(0, 1.0f), Random.Range(0, 1.0f), Random.Range(0, 1.0f));

            Camera.main.SendMessage("SetTarget", gameObject);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (pview.IsMine)
        {
            playercommand = new Vector3(0, 0, Input.GetAxis("Vertical"));
            playertorque = new Vector3(0, Input.GetAxis("Horizontal"), 0);
        }
    }
    private void FixedUpdate()
    {
        if (pview.IsMine)
        {
            rdb.AddRelativeForce(playercommand * motorpower);
            rdb.AddTorque(playertorque * motorpower);
        }
    }
    Color GetColor(int colorChoice)
    {
        switch (colorChoice)
        {
            case 0: return Color.red;
            case 1: return Color.green;
            case 2: return Color.blue;
            case 3: return Color.yellow;
            case 4: return Color.cyan;
            case 5: return Color.grey;
            case 6: return Color.magenta;
            case 7: return Color.white;
        }

        return new Color(Random.Range(0,1.0f), colorChoice * 0.1f, Random.Range(0, 1.0f));
    }

    [PunRPC]
    void ReceiveColor(float r, float g, float b)
    {
        Color c = new Color(r, g, b);
        rend.material.color = c;
    }
}
