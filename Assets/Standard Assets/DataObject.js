﻿#pragma strict

class DataObject extends System.Object {
	var action:String = "";
	var data:Msg = new Msg();
	public function toString() {
		return Newtonsoft.Json.JsonConvert.SerializeObject(this);//JsonUtility.ToJson(this);
	}
}