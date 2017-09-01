using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PetAI : MonoBehaviour {

	private Class_Pet Pet;
	private GameObject inputModeController;
	private InputModeScript inputMode;

	public Animator anim;
    public float speed;
    public float area;

    //Waypoints for the movement
    private Vector2 newWayPoint;
    private Vector3 wayPoint;
    private Vector3 oldWayPoint;


    public float timeSmooth;
    private float time;
    private CharacterController controller;

    //For proximity detection
    public float detectionRange;
	public bool closeEnough;

	//For eating
    private GameObject food;
    private Transform foodLocation;

    //For playing
    private GameObject toy;
    private Transform toyLocation;

    public float waitTimer;
    public float waitThreshold = 5;
    public string currentAction;
    public float hungerTimer;
    public float hungerWaitThreshold = 2;
    public float dirtinessTimer;
    public float dirtinessWaitThreshold = 2;
    public float boredomTimer;
    public float boredomWaitThreshold = 2;
    public float happinessTimer;
    public float happinessWaitThreshold = 2;


    public Vector3 gameObjectSreenPoint;
	public Vector3 mousePreviousLocation;
	public Vector3 mouseCurLocation;
	public Vector3 mouseDistance;
	public Vector3 objectCurrentPosition;
	public Vector3 objectTargetPosition;

    //public bool hold;

	// Use this for initialization
	void Start () {
		//Get input mode controller
		inputModeController = GameObject.Find("InputModeController");
		inputMode = inputModeController.GetComponent<InputModeScript>();
		
		newWayPoint = Random.insideUnitCircle * area;
        wayPoint = new Vector3(newWayPoint.x, transform.position.y, newWayPoint.y);
        oldWayPoint = wayPoint;
        
        //Get pet's controller, animator, and class
        controller = GetComponent<CharacterController>();
        //anim = GetComponentInChildren<Animator>();
        Pet = GetComponent<Class_Pet>();

        waitTimer = 0;
        hungerTimer = 0;
        boredomTimer = 0;
        dirtinessTimer = 0;
        happinessTimer = 0;
        
        Idle();
	}
	
	// Update is called once per frame
	void Update () {

		statReduction();

		//If player is not touching the pet
		if(Pet.hold == false){
			//if(SpawnApple.appleAmount >= 1){
			if(SpawnApple.newApple != null){
				foodLocation = SpawnApple.newApple.transform;
				//newWayPoint = foodLocation.position;
		    	oldWayPoint = wayPoint;
		    	wayPoint = new Vector3(foodLocation.position.x, wayPoint.y, foodLocation.position.z);
				Eating();
			}
			else if(SpawnBall.newBall != null){
				toyLocation = SpawnBall.newBall.transform;
				//newWayPoint = toyLocation.position;
		    	oldWayPoint = wayPoint;
		    	wayPoint = new Vector3(toyLocation.position.x, wayPoint.y, toyLocation.position.z);
				Playing();
			}
			
			//If no action from the player
			else { 

				waitTimer += Time.deltaTime;
				

				//Timer triggered
				if(waitTimer >= waitThreshold){
					//switch actions
					if(currentAction == "Idling"){RandomWalk();}
					else if(currentAction == "RandomWalking"){Idle();}
					else {RandomWalk();}
					
					waitTimer = 0;
				}

				else {
					if(currentAction == "Idling"){Idle();}
					else if(currentAction == "RandomWalking"){RandomWalk();}
					//else {Idle();}
				}

			}
		}

		//If Player is touching the pet
		else{

			waitTimer = 0;
			if(inputMode.cleanMode == true){
				Debug.Log("cleanMode == " + inputMode.cleanMode);
				currentAction = "Cleaning";
				Cleaning();
				//anim.SetTrigger("StartIdle");
				//Look at camera
				transform.LookAt(transform.position + Camera.main.transform.rotation * -Vector3.forward, //negative here is temp fix, should make sure forward is toward camera instead
	            Camera.main.transform.rotation * Vector3.up);
			}

			else{
				currentAction = "Petting";
				//anim.SetTrigger("StartIdle");
				transform.LookAt(transform.position + Camera.main.transform.rotation * -Vector3.forward,
	            Camera.main.transform.rotation * Vector3.up);
	            Petting();
			}
			
		}

	}
		
	// Function for walking randomly
	public void RandomWalk() {

		currentAction = "RandomWalking";
		Vector3 smoothLookAt = Vector3.Slerp(oldWayPoint, wayPoint, time/timeSmooth);
        time += Time.deltaTime;
        smoothLookAt.y = wayPoint.y;
       //anim.SetTrigger("StartWalk");
        
         
        if(Vector3.Distance(transform.position, wayPoint)>20.0f && time/timeSmooth < 1.0f){
            transform.LookAt(smoothLookAt);
            controller.SimpleMove(transform.forward * speed);
        }
        else {
            newWayPoint = Random.insideUnitCircle * area;
            oldWayPoint = wayPoint;
            wayPoint = new Vector3(newWayPoint.x, wayPoint.y, newWayPoint.y);
            transform.LookAt(smoothLookAt);
            controller.SimpleMove(transform.forward * speed);
            time = 0;
        }
	}

	//public void Walk(){
		//currentAction = "Walk";
	//}

	// Function for idling
	public void Idle() {
		
		currentAction = "Idling";
		//anim.SetTrigger("StartIdle");

	}

	// Function for eating
	public void Eating() {

		Vector3 smoothLookAt = Vector3.Slerp(oldWayPoint, wayPoint, time/timeSmooth);
		//foodLocation = food.transform;
		closeEnough = false;
	    currentAction = "Eating";
	    waitTimer = 0;

		if( Vector3.Distance( foodLocation.position, transform.position) > detectionRange ){
			//anim.SetTrigger("StartWalk");
			/*if(Vector3.Distance(transform.position, wayPoint)>20.0f && time/timeSmooth < 1.0f){
	            transform.LookAt(smoothLookAt);
	            controller.SimpleMove(transform.forward * speed);
        	}*/
        	//else {
	            //newWayPoint = foodLocation.position;
	            //oldWayPoint = wayPoint;
	            //wayPoint = new Vector3(newWayPoint.x, wayPoint.y, newWayPoint.y);
            transform.LookAt(smoothLookAt);
            controller.SimpleMove(transform.forward * speed);
	            //time = 0;
        	//}
		}
		
        if( Vector3.Distance( foodLocation.position, transform.position) <= detectionRange ){closeEnough = true;}

        if(closeEnough == true){
        	//Debug.Log("Close Enough!");
        	//anim.SetTrigger("StartIdle");
        	Destroy(SpawnApple.newApple);
        	SpawnApple.appleAmount -= 1;
        	Pet.hunger -= 10;
        	Pet.dirtiness += 10;
        }
	}

	// Function for playing
	public void Playing() {

		//toyLocation = toy.transform;
		closeEnough = false;
		Vector3 smoothLookAt = Vector3.Slerp(oldWayPoint, wayPoint, time/timeSmooth);
	    currentAction = "Playing";
	    waitTimer = 0;
	    Pet.boredom -= 5 * Time.deltaTime;

		if( Vector3.Distance( toyLocation.position, transform.position) > detectionRange ){
			closeEnough = false;
			//anim.SetTrigger("StartWalk");
			/*if(Vector3.Distance(transform.position, wayPoint)>20.0f && time/timeSmooth < 1.0f){
	            transform.LookAt(smoothLookAt);
	            controller.SimpleMove(transform.forward * speed);
        	}
        	else {
	            newWayPoint = SpawnBall.newBall.transform.position;
	            oldWayPoint = wayPoint;
	            wayPoint = new Vector3(newWayPoint.x, wayPoint.y, newWayPoint.y);*/
            transform.LookAt(new Vector3(smoothLookAt.x, transform.position.y, smoothLookAt.z));
            controller.SimpleMove(transform.forward * speed);
	            /*time = 0;
        	}*/

		}
		
        if( Vector3.Distance( toyLocation.position, transform.position) <= detectionRange ){closeEnough = true;}

        if(closeEnough == true){
        	//Debug.Log("Close Enough to toy!");
        	//anim.SetTrigger("StartIdle");
        }
	}

	void OnMouseDown()
	{
		//This grabs the position of the object in the world and turns it into the position on the screen
		gameObjectSreenPoint = Camera.main.WorldToScreenPoint(transform.position);
		//Sets the mouse pointers vector3
		mousePreviousLocation = new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.y);

	}

	void OnMouseDrag()
	{
		mouseCurLocation = new Vector3(Input.mousePosition.x, Input.mousePosition.y, Input.mousePosition.y);
		mouseDistance = mouseCurLocation - mousePreviousLocation;//Changes the force to be applied
		mousePreviousLocation = mouseCurLocation;
	}

	//Function for cleaning
	public void Cleaning() {

		currentAction = "Cleaning";
		waitTimer = 0;

		if(mouseDistance != new Vector3(0,0,0)){
			Pet.dirtiness -= 5 * Time.deltaTime;
		}

	}

	void statReduction(){

		if(hungerTimer >= hungerWaitThreshold){
			Pet.hunger += 1 * Time.deltaTime;
			hungerTimer = 0;
		}
		else{hungerTimer += 1;}

		if(dirtinessTimer >= dirtinessWaitThreshold){
			Pet.dirtiness += 1 * Time.deltaTime;
			dirtinessTimer = 0;
		}
		else{dirtinessTimer += 1;}

		if(boredomTimer >= boredomWaitThreshold){
			Pet.boredom += 1 * Time.deltaTime;
			boredomTimer = 0;
		}
		else{boredomTimer += 1;}

		if(happinessTimer >= happinessWaitThreshold){
			Pet.happiness -= 1 * Time.deltaTime;
			happinessTimer = 0;
		}
		else{happinessTimer += 1;}


	}

	public void Petting(){
		currentAction = "Petting";
		waitTimer = 0;
		Debug.Log("Is Petting");

		if(mouseDistance != new Vector3(0,0,0)){
			Pet.happiness += 5 * Time.deltaTime;
		}
	}

}
