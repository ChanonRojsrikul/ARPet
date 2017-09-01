using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputModeScript : MonoBehaviour {

	public bool cleanMode;

	// Use this for initialization
	void Start () {
		cleanMode = false;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void CleanModeSwitch () {

		if(cleanMode == false){
			cleanMode = true;
		}

		else{
			cleanMode = false;
		}

	}
}
