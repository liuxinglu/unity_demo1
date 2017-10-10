#pragma strict

class Msg extends System.Object {
	var type:String = "";
	var gameIndex:int = 0;
	var data:Object = {};

	public function toString() {
		return JsonUtility.ToJson(this);
	}
}
