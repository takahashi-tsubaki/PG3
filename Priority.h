#pragma once

//�D��x�N���X
class Priority
{
public:

	enum class PriorityType
	{
		top,//�ŗD�掖��
		high,//���D��
		middle,//���D��
		low,//��D��

	};

	//�D��x���Z�b�g
	inline void SetPriority(PriorityType type) { priority = (int)type; }
	//�D��x���Q�b�g
	inline int GetPriority() { return priority; }

private:
	int priority;
};

