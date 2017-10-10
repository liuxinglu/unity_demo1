#pragma strict

function Start () {
	
}

function Update () {
	if(gameObject.transform.position.y < 0) {
		var num:int = gameObject.Find("MainCamera").GetComponent(ShootingDemo).destroy_num++;
		if(num > 20) {
			gameObject.Find("Canvas/shotNum").GetComponent(UnityEngine.UI.Text).text = "恭喜过关";
			gameObject.Find("MainCamera").GetComponent(ShootingDemo).enabled = false;
			gameObject.Find("floor").GetComponent(restart).enabled = true;
		}
		Destroy(gameObject);
	}
}
