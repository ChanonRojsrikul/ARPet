using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour {

	public GameObject apple;
	public static int appleAmount = 0;
	public static GameObject newApple;

	public GameObject ball;
	public static int ballAmount = 0;
	public static GameObject newBall;

	public GameObject duck;
	public GameObject PetObject;
	public static GameObject pet;
	public string petType = "";


	// Use this for initialization
	void Start () {
		pet = null;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void AddApple(){
		if(newApple != null){
			Destroy(newApple);
			newApple = null;
			appleAmount = 0;
		}
	    newApple = Instantiate(apple, transform.position, Quaternion.identity) as GameObject;
	    newApple.transform.localScale += new Vector3(40, 40, 40);
	    appleAmount += 1;
	}

	void AddBall(){
		if(newBall != null){
			Destroy(newBall);
			newBall = null;
			ballAmount = 0;
		}
		else {
			newBall = Instantiate(ball, transform.position, Quaternion.identity) as GameObject;
		    newBall.transform.localScale += new Vector3(10, 10, 10);
		    ballAmount += 1;
		}
	}

	public void SpawnDuck(){
		pet = Instantiate(duck, transform.position, Quaternion.identity);
	}

	public void SpawnPetObject(string chosenPet){
		petType = chosenPet;
		pet = Instantiate(PetObject, transform.position, Quaternion.identity);
		if(petType == "duck"){
			pet.transform.Find("LOVEDUCK").gameObject.SetActive(true);
			pet.GetComponent<Class_Pet>().petType = petType;
		}
		else if(petType == "CatBaby"){
			pet.transform.Find("CatBaby").gameObject.SetActive(true);
			pet.GetComponent<Class_Pet>().petType = petType;
		}
		else {Debug.Log("Error: petType not recognized.");}
	}
}
