#pragma once
#include <iostream>

template <typename T>
struct CELL
{
	int val_;//値
	CELL* prev_ = nullptr;//前のセル
	CELL* next_ = nuolptr;//次のセル

	Create(T val, CELL* prev, CELL* next)
	{
		val_ = val;
		prev_ = prev;
		next_ = next;
	}

};

template <class T>
class List
{

private:
	CELL* node = nullptr;

	int val = 0;
	
public:

	List()//コンストラクタ
	{
		node = new CELL<T>();
	}

	//指したセルの後ろに値を追加
	void Add(T val,CELL<T>* cell)
	{
		//新規セルの作成
		CELL<T>* newCell = Create<T>*(val,cell,cell->next_);
		cell->prev_ = newCell;
		cell = newCell;
		
	}
	
	//セルの取得
	CELL<T> GetCell(int val)
	{
		CELL<T>* tmp = node;

		//任意の場所まで移動させる
		for (int i = 0; i < val; i++)
		{
			tmp = tmp->next_;
		}
		return tmp;
	}
};

