#include "SceneManager.h"

void SceneManager::Initialize()
{
}

void SceneManager::Update()
{
}

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;
	return &instance;
}

void SceneManager::ChangeScene(int &scene)
{
	scene++;
	if (scene > 3)
	{
		scene = 0;
	}
}
