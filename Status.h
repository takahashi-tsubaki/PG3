#pragma once

//�X�e�[�^�X�N���X
class Status
{
public:

	enum class StatusType
	{
		Completion,//����
		Incomplete,//������
	};

	//�X�e�[�^�X���Z�b�g
	inline void SetStatus(StatusType type) { status = (int)type; }
	//�X�e�[�^�X���Q�b�g
	inline int GetStatus() { status; }

private:

	int status;

};

