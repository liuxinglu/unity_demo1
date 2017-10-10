using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class testC2 : MonoBehaviour {

	public UnityAction<Msg> action;
	DataHandler dataHandler;

	// Use this for initialization
	void Start () {
//		testJ2 t = (testJ2)gameObject.GetComponent("testJ2");
//		print("js变量" + t.GetType().GetField("speed").GetValue(t) + "在C＃中调用");//访问js变量
//		t.CallJs();
		dataHandler = (DataHandler)GetComponent("DataHandler");
		action = new UnityAction<Msg>(callback);
		(dataHandler.GetType().GetField("m_MyEvent").GetValue(dataHandler) as MyEvent).AddListener(action);
	}

	public void callback(Msg obj) {
		print("事件回调" + obj.data);
	}
}
