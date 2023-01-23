#pragma once
class SceneManager final
{

private:
	//コンストラクタをprivateにする
	SceneManager();
	//デストラクタをprivateにする
	~SceneManager();

public:

	//コピーコンストラクタを無効にする
	SceneManager(static SceneManager& obj) = delete;
	//代入演算子を無効にする
	SceneManager& operator=(static SceneManager& obj) = delete;

	void Initialize();

	void Update();

	static SceneManager* GetInstance();

	void ChangeScene(int &scene);

};

