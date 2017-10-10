#pragma strict

function Start () {
}

function Update () {
}

function enterButtonClick() {
	UnityEngine.SceneManagement.SceneManager.LoadScene("demo3");
}

function exitButtonClick() {
	print("exit");
	Application.Quit();
}