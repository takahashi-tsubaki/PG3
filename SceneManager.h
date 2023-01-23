#pragma once
class SceneManager final
{

private:
	//�R���X�g���N�^��private�ɂ���
	SceneManager();
	//�f�X�g���N�^��private�ɂ���
	~SceneManager();

public:

	//�R�s�[�R���X�g���N�^�𖳌��ɂ���
	SceneManager(static SceneManager& obj) = delete;
	//������Z�q�𖳌��ɂ���
	SceneManager& operator=(static SceneManager& obj) = delete;

	void Initialize();

	void Update();

	static SceneManager* GetInstance();

	void ChangeScene(int &scene);

};

