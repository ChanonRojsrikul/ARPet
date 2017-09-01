using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Class_Pet : MonoBehaviour {

	//Stats value = default
	public float hunger = 0;
	public float boredom = 0;
	public float dirtiness = 0;
	public float happiness = 80;
	public float evolutionProgress = 100;

	//States of the pet = default
	public bool Hungry = false;
	public bool Bored = false;
	public bool Dirty = false;
	public bool Happy = true;
	public bool Evolvable = false;

	//Maximum and Minimum of stats, used for UI and limiting overflow
	public float statMax = 100;
	public float statMin = 0;

	//Thresholds for state change
	public float hungerThreshold = 50;
	public float boredomThreshold = 50;
	public float dirtinessThreshold = 50;
	public float happinessThreshold = 50;

	public int petID;
	public string petType;
	public bool hold = false;

	private Component dirt;
	private SpriteRenderer dirtRenderer;
	private Image cleanBtnFillImg;
	private Image feedBtnFillImg;
	private Image playBtnFillImg;
	private Image happyBtnFillImg;
	private Image evolveBtnFillImg;

	// Use this for initialization
	void Start () {
		dirt = transform.Find("EffectCanvas/dirt");
		dirtRenderer = dirt.GetComponent<SpriteRenderer>();
		cleanBtnFillImg = GameObject.Find("CleanButtonFill").GetComponent<Image>();
		feedBtnFillImg = GameObject.Find("FoodButtonFill").GetComponent<Image>();
		playBtnFillImg = GameObject.Find("ToyButtonFill").GetComponent<Image>();
		happyBtnFillImg = GameObject.Find("HappyButtonFill").GetComponent<Image>();

	}
	
	// Update is called once per frame
	void Update () {

		//Updating stats value
		isHungry();
		isBored();
		isDirty();
		isHappy();
		evolFull();

		dirtyEffect();
		statFill();

	}

	void OnMouseDrag() {

		hold = true;
		//Debug.Log(hold);

	}

	void OnMouseUp() {

		hold = false;
		//Debug.Log(hold);

	}

	// Check if the pet is Hungry
	void isHungry() {

		//First, check if stat overflows
		if(hunger > statMax){hunger = statMax;}
		if(hunger < statMin){hunger = statMin;}

		if(hunger >= hungerThreshold){Hungry = true;}
		else {Hungry = false;}
		//return Hungry;

	}

	// Check if the pet is Bored
	void isBored() {

		//First, check if stat overflows
		if(boredom > statMax){boredom = statMax;}
		if(boredom < statMin){boredom = statMin;}

		if(boredom >= boredomThreshold){Bored = true;}
		else {Bored = false;}
		//return Bored;

	}

	// Check if the pet is Dirty
	void isDirty() {

		//First, check if stat overflows
		if(dirtiness > statMax){dirtiness = statMax;}
		if(dirtiness < statMin){dirtiness = statMin;}

		if(dirtiness >= dirtinessThreshold){Dirty = true;}
		else {Dirty = false;}
		//return Dirty;

	}

	// Check if the pet is Happy
	void isHappy() {

		//First, check if stat overflows
		if(happiness > statMax){happiness = statMax;}
		if(happiness < statMin){happiness = statMin;}

		if(happiness <= happinessThreshold){Happy = false;}
		else {Happy = true;}
		//return Happy;

	}

	//For adjusting dirty sprite
	void dirtyEffect(){

		if(dirtiness < 10){
			dirtRenderer.color = new Color(1f,1f,1f,0f);
		}

		if(dirtiness >= 10 && dirtiness < 20){
			dirtRenderer.color = new Color(1f,1f,1f,0.2f);
		}

		if(dirtiness >= 20 && dirtiness < 30){
			dirtRenderer.color = new Color(1f,1f,1f,0.4f);
		}

		if(dirtiness >= 30 && dirtiness < 40){
			dirtRenderer.color = new Color(1f,1f,1f,0.6f);
		}

		if(dirtiness >= 40 && dirtiness < 50){
			dirtRenderer.color = new Color(1f,1f,1f,0.8f);
		}

		if(dirtiness >= 50){
			dirtRenderer.color = new Color(1f,1f,1f,1f);
		}

	}

	void statFill(){
		//evolveBtnFillImg = GameObject.Find("EvolveButtonFill").GetComponent<Image>();

		cleanBtnFillImg.fillAmount = 1 - dirtiness/100f;
		feedBtnFillImg.fillAmount = 1 - hunger/100f;
		playBtnFillImg.fillAmount = 1 - boredom/100f;
		happyBtnFillImg.fillAmount = happiness/100f;
		//evolveBtnFillImg.fillAmount = evolutionProgress/100f;

		//Debug.Log("hunger = " + hunger);

	}

	void evolFull(){
		if(evolutionProgress >= statMax){Evolvable = true;}
		else {Evolvable = false;}
	}
}
