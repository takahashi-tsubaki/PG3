#pragma once

#include "Task.h"
#include <list>

//タスク管理クラス
class TaskManager
{
private:
	std::list<std::unique_ptr<Task>> tasks;

public:
	//新しく作成
	void Create();
	//指定した要素番号の要素を削除
	void Delete(int elementNum);
	//初期化
	void Init();
	//更新
	void Update();
	//描画
	void Draw();
};
