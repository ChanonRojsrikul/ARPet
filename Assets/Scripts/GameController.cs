using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	//This script is for controlling the state and flow of the game.

	public static string UIMode = "";
	public static string currentPet = "";
	public GameObject pet;

	private GameObject UICanvas;
	private GameObject ChoosePetCanvas;

	private GameObject AdoptionDialogue;
	private GameObject EvolveDialogue;

	private GameObject petObject;
	private Class_Pet class_pet;

	private ObjectSpawner objectSpawner;

	// Use this for initialization
	void Start () {
		UICanvas = GameObject.Find("UICanvas");
		ChoosePetCanvas = GameObject.Find("ChoosePetCanvas");
		AdoptionDialogue = GameObject.Find("AdoptionDialogue");
		EvolveDialogue = GameObject.Find("EvolveDialogue");
		AdoptionDialogue.SetActive(false);
		EvolveDialogue.SetActive(false);
		//objectSpawner = GameObject.Find("ObjectSpawner").GetComponent<ObjectSpawner>();


		UIMode = "choosePetUI";
		if(UIMode == "choosePetUI"){choosePetUI();}
		else if(UIMode == "normalUI"){normalUI();}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void choosePetUI(){

		//show ChoosePetCanvas and disable UICanvas
		ChoosePetCanvas.SetActive(true);
		UICanvas.SetActive(false);

	}

	public void normalUI(){

		//show ChoosePetCanvas and disable UICanvas
		UICanvas.SetActive(true);
		ChoosePetCanvas.SetActive(false);

	}

	public void putPetAdoption(){
		Destroy(ObjectSpawner.pet);
		AdoptionDialogue.SetActive(false);
	}

	public void adoptionDialogue(){
		//Spawn AdoptionDialogue prefab and put it in PopUpCanvas
		AdoptionDialogue.SetActive(true);

	}

	public void evolveDialogue(){
		//Spawn AdoptionDialogue prefab and put it in PopUpCanvas
		EvolveDialogue.SetActive(true);

	}

	public void evolvePet(){
		//petObject = GameObject.Find("PetObject");
		class_pet = ObjectSpawner.pet.GetComponent<Class_Pet>();
		if(class_pet.petType == "CatBaby"){
			ObjectSpawner.pet.transform.Find("CatBaby").gameObject.SetActive(false);
			ObjectSpawner.pet.transform.Find("CatChild").gameObject.SetActive(true);
		}
	}
}
