#pragma strict

function OnCollisionEnter() {
	gameObject.Find("Canvas/shotNum").GetComponent(UnityEngine.UI.Text).text = "碰撞";
	gameObject.Find("Directional light").GetComponent(Light).enabled = false;
	Destroy(gameObject, 3.0f);
}