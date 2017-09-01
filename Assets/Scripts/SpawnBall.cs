using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnBall : MonoBehaviour {

	public GameObject ball;
	public static int ballAmount = 0;
	public static GameObject newBall;

	public void AddBall()
	{
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

}
