#pragma strict
import System.Reflection;

var old_color:Color;
var jump_speed:float = 100.0;
var speed:float = 60.0f;
var grav:float = 800.0;
private var _move_dir:Vector3 = Vector3.zero;
private var _ground:boolean = false;
private var cs1:testC;
private var dataHandler:DataHandler;
function Start () {
	old_color = GetComponent.<Renderer>().material.color;
//	cs1 = GetComponent("testC");
//    print("c#变量" + cs1.GetType().GetField("move_speed").GetValue(cs1) + "在js中调用 ");//调用C＃变量
//    cs1.PrintCS("testC");
    dataHandler = GetComponent("DataHandler");
    (dataHandler.GetType().GetField("m_MyEvent").GetValue(dataHandler) as MyEvent).AddListener(callback);
    Application.ExternalCall("loadGameComplete");
}

function callback(data:Msg) {
	if(data.type == "userRole") {
		if(DataHandler.userRole._userRole == "COORDINATOR") {
			print("I'm teacher");
		} else {
			print("I'm student");
		}
	}
}

function Update() {
	if(Input.GetKey(KeyCode.Q)) {
		if(DataHandler.userRole != null) {
			if(DataHandler.userRole._userRole == "COORDINATOR") {
				var obj = new Msg();
				obj.type = '3dMove';
				obj.data = "testMsg";
				dataHandler.sendMessageToServer(obj);
			}
		}
		transform.Rotate(0, -25 * Time.deltaTime, 0, Space.Self);
	} else if(Input.GetKey(KeyCode.E)) {
		transform.Rotate(0, 25 * Time.deltaTime, 0, Space.Self);
	} else if(Input.GetKey(KeyCode.Z)) {
		transform.Rotate(-25 * Time.deltaTime, 0, 0, Space.Self);
	} else if(Input.GetKey(KeyCode.X)) {
		transform.Rotate(25 * Time.deltaTime, 0, 0, Space.Self);
	}
}


function OnMouseOver() {
	GetComponent.<Renderer>().material.color = Color.red;
//	transform.Rotate(0, 180 * Time.deltaTime, 0);
}

function OnMouseExit() {
	GetComponent.<Renderer>().material.color = old_color;
}

function OnMouseDown() {
	GetComponent.<AudioSource>().Play();
} 


@script RequireComponent(CharacterController)
function FixedUpdate() {
	var ctrller:CharacterController = GetComponent.<CharacterController>();
	if(ctrller.isGrounded) {
		_move_dir = Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
		_move_dir = transform.TransformDirection(_move_dir);
		_move_dir *= speed;

	}
	if(Input.GetButton("Jump")) {
		_move_dir.y = jump_speed;
	}
	_move_dir.y -= grav * Time.deltaTime;

	ctrller.Move(_move_dir * Time.deltaTime);

}