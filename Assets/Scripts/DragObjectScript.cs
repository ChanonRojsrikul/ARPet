using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragObjectScript : MonoBehaviour {
	
 	private Rigidbody selfRigidbody;
 	public Vector3 gameObjectSreenPoint;
	public Vector3 mousePreviousLocation;
	public Vector3 mouseCurLocation;
	public bool hold;
	public Vector3 force;
	public Vector3 objectCurrentPosition;
	public Vector3 objectTargetPosition;
	public float topSpeed = 10;

	// Use this for initialization
	void Start () {
		selfRigidbody = GetComponent<Rigidbody>();
		hold = false;
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnMouseDown()
	{
		//This grabs the position of the object in the world and turns it into the position on the screen
		gameObjectSreenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.position);
		//Sets the mouse pointers vector3
		mousePreviousLocation = new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.y);

	}

	void OnMouseDrag()
	{
		mouseCurLocation = new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.y);
		force = mouseCurLocation - mousePreviousLocation;//Changes the force to be applied
		mousePreviousLocation = mouseCurLocation;
		hold = true;
	}

	public void OnMouseUp()
	{
		//Makes sure there isn't a ludicrous speed
		if (selfRigidbody.velocity.magnitude > topSpeed)
	    force = selfRigidbody.velocity.normalized * topSpeed;
	    hold = false;
	}

	public void FixedUpdate()
	{
		if(hold == true){selfRigidbody.velocity = force;}
	}

	

}
