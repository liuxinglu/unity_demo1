#pragma strict

var speed:int = 70;
var shot_speed:int = 68000;
var new_object:Transform;
var shot_num:int = 0;
var destroy_num:int = 0;
private var shotNum:GameObject;

function Start () {
	shotNum = gameObject.Find("Canvas/shotNum");
}

function Update () {
//	var x:float = Input.GetAxis("Horizontal") * Time.deltaTime * speed;
//	var z:float = Input.GetAxis("Vertical") * Time.deltaTime * speed;
//	transform.Translate(x, z, 0);
	if(Input.GetButtonDown("Fire1")) {
		var fwd:Vector3 = transform.TransformDirection(Vector3.forward);
		var n:Transform = Instantiate(new_object, transform.position, transform.rotation);
		n.GetComponent(Rigidbody).AddForce(fwd * shot_speed);
		shot_num++;
		shotNum.GetComponent(UnityEngine.UI.Text).text = shot_num + "个 消灭数：" + destroy_num;
	}

//	if(Input.GetKey(KeyCode.Q)) {
//		transform.Rotate(0, -25 * Time.deltaTime, 0, Space.Self);
//	} else if(Input.GetKey(KeyCode.E)) {
//		transform.Rotate(0, 25 * Time.deltaTime, 0, Space.Self);
//	}

}