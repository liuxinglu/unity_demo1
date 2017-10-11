public class MyEvent extends UnityEngine.Events.UnityEvent.<Msg>{}

var m_MyEvent:MyEvent;
public static var userRole:UserRole = new UserRole();
public static var handler:DataHandler;
function Start () {
	if(m_MyEvent == null) {
		m_MyEvent = new MyEvent();
	}
}

function Update () {
	
}

function sendMessageToServer(vd:Msg) {
	var tempvd:Msg = vd;
	var o = new DataObject();
	o.action = "publicMessage";
	o.data = tempvd;
	Application.ExternalCall("sendMsg", o.toString());
}

function move3D(d) {
	var obj = new Msg();
	obj.type = '3dMove';
	obj.data = d;
	sendMessageToServer(obj);
}

function getMessageFromServer(msg:String) {
	print("getMessageFromServer " + msg);
	var obj = Newtonsoft.Json.JsonConvert.DeserializeObject.<DataObject>(msg);//JsonUtility.FromJson.<DataObject>(msg);
//	var data = JsonUtility.FromJson.<Msg>(obj.data);
	switch(obj.data.type) {
		case "3dMove":
			_get3DParam(obj.data);
			break;
		case "userRole":
			userRole = Newtonsoft.Json.JsonConvert.DeserializeObject.<UserRole>(obj.data.data);
			_userRole(obj.data);
			break;
	}
}

function _get3DParam(data) {
	m_MyEvent.Invoke(data);
}

function _userRole(data) {
	m_MyEvent.Invoke(data);
}