#pragma once
class Enemy
{
public://�����o�֐�

	Enemy();
	~Enemy();
	//������
	void Initialize();
	//�X�V
	void Update();

	//���상���o�֐�
	void Approach();//�ڋߊ֐�
	void Shot();//�ˌ��֐�
	void Leave();//���E�֐�
	//�V���O���g��
	static Enemy* Getinstance();

private:

	//�����o�֐��|�C���^�e�[�u��
	static void (Enemy:: *pFuncTable[])();

private://�����o�ϐ�
	int phase_ = 0;
};

