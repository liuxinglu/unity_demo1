#pragma strict

class UserRole extends System.Object{
	var _loginToken:String = "09c4cdc486f643cd8e7d8a044e004a22";
	var _userName:String = "user1";
	var _userType:int = 1;
	var _userRole:String = "COORDINATOR";
	public function toString() {
		return JsonUtility.ToJson(this);
	}
}