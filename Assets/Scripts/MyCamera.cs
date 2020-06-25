using Boo.Lang.Environments;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyCamera : MonoBehaviour
{

    public GameObject target;
    public Vector3 offset;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (target)
        {
            Vector3 offsetw = target.transform.TransformDirection(offset);
            transform.position = Vector3.Lerp(transform.position, target.transform.position + offsetw, Time.deltaTime);

            transform.LookAt(target.transform);
        }
    }

    public void SetTarget(GameObject myself)
    {
        target = myself;
    }
}
