#pragma once
class SceneManager
{
public:

	void Initialize();

	void Update();

	static SceneManager* GetInstance();

	void ChangeScene(int &scene);

private:
};

