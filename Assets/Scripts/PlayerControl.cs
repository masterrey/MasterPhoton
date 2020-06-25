using Photon.Pun;
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
    public MeshRenderer rendt;
    public GameObject tower;
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

            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit, 10000))
            {
                tower.transform.LookAt(hit.point);
                Debug.DrawLine(ray.origin, hit.point);
            }

        }
    }
   

    [PunRPC]
    void ReceiveColor(float r, float g, float b)
    {
        Color c = new Color(r, g, b);
        rend.material.color = c;
        rendt.material.color = c;
    }


    private void OnParticleCollision(GameObject other)
    {
       
        rdb.AddExplosionForce(50, transform.position, 10);
    }
   
}
