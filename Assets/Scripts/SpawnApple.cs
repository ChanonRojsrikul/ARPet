using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnApple : MonoBehaviour {

	public GameObject apple;
	public static int appleAmount = 0;
	public static GameObject newApple;

	public void AddObject()
	{
		if(newApple != null){
			Destroy(newApple);
			newApple = null;
			appleAmount = 0;
		}
	    newApple = Instantiate(apple, transform.position, Quaternion.identity) as GameObject;
	    newApple.transform.localScale += new Vector3(40, 40, 40);
	    appleAmount += 1;
	}

}
