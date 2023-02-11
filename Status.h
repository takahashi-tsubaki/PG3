#pragma once

//ステータスクラス
class Status
{
public:

	enum class StatusType
	{
		Completion,//完了
		Incomplete,//未完了
	};

	//ステータスをセット
	inline void SetStatus(StatusType type) { status = (int)type; }
	//ステータスをゲット
	inline int GetStatus() { status; }

private:

	int status;

};

