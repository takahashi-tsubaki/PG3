#pragma once
//���N���X
class IShape
{

public:

	//�f�X�g���N�^
	virtual ~IShape();
	//�`��
	virtual void Draw() = 0;
	//�ʐς����߂�
	virtual void Size() = 0;
};
