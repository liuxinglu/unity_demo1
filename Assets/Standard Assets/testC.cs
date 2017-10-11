using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;

public class testC : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}

	public float move_speed = 5.0f;
	// Update is called once per frame
	void Update () {

	}

	public void PrintCS(string str) {
		print(str + ":C#方法被调用");
	}


}
