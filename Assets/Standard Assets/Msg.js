#pragma strict

class Msg extends System.Object {
	var type:String = "";
	var gameIndex:int = 0;
	var data:String = "";

	public function toString() {
		return JsonUtility.ToJson(this);
	}
}
