﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WalkScript : MonoBehaviour {

	Animator anim;
	public float speed = 6.0F;
	private Vector3 moveDirection = Vector3.zero;

	// Use this for initialization
	void Start () {
		Screen.SetResolution (640, 960, true);
		anim = GetComponent<Animator>();

	}
	
	// Update is called once per frame
	void Update () {
		CharacterController controller = GetComponent<CharacterController>();
		if (controller.isGrounded) {

			moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
	        moveDirection = transform.TransformDirection(moveDirection);
	        //Multiply it by speed.
	        moveDirection *= speed;
	        controller.Move(moveDirection * Time.deltaTime);
			anim.SetTrigger("StartWalk");


		}
		
	}
}
