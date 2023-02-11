#pragma once

//優先度クラス
class Priority
{
public:

	enum class PriorityType
	{
		top,//最優先事項
		high,//高優先
		middle,//中優先
		low,//低優先

	};

	//優先度をセット
	inline void SetPriority(PriorityType type) { priority = (int)type; }
	//優先度をゲット
	inline int GetPriority() { return priority; }

private:
	int priority;
};

