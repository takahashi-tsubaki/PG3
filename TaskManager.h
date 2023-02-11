#pragma once

#include "Task.h"
#include <list>

//�^�X�N�Ǘ��N���X
class TaskManager
{
private:
	std::list<std::unique_ptr<Task>> tasks;

public:
	//�V�����쐬
	void Create();
	//�w�肵���v�f�ԍ��̗v�f���폜
	void Delete(int elementNum);
	//������
	void Init();
	//�X�V
	void Update();
	//�`��
	void Draw();
};
