#pragma once
#include <iostream>

template <typename T>
struct CELL
{
	T val_;//値
	CELL* prev_ = nullptr;//前のセル
	CELL* next_ = nuolptr;//次のセル

	CELL()
	{
		prev_ = this;
		next_ = this;
	}

	CELL(T val, CELL* prev, CELL* next)
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
	CELL<T>* node;

	int size_;
	
public:

	List()//コンストラクタ
	{
		node = new CELL<T>();
		size_ = 0;
	}

	~List()//コンストラクタ
	{

	}

	//指したセルの後ろに値を追加
	void Add(T val,CELL<T>* cell)
	{
		//新規セルの作成
		CELL<T>* newCell =  new CELL<T>* (val, cell, cell->next_);
		cell->prev_ = newCell;
		cell = newCell;
		size_++;
	}

	//一番前に追加
	void push_front(T val)
	{
		CELL<T>* cur = node;
		add(val,cur);
	}
	
	//一番後ろに追加
	void push_back(T val)
	{
		CELL<T>* cur = node->prev_;
		add(val,cur);
	}

	//一覧を表示する
	void dump()
	{
		

	}


	int size()
	{
		return size_;
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

