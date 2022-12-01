#pragma once
#include <iostream>

template <typename T>
struct CELL
{
	T val_;//値
	CELL* prev_ = nullptr;//前のセル
	CELL* next_ = nullptr;//次のセル

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

template <typename T>
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

#pragma region 追加する系統 
	//指したセルの後ろに値を追加
	void add(T val,CELL<T>* cell)
	{
		//新規セルの作成
		CELL<T>* newCell =  new CELL<T>(val, cell, cell->next_);
		cell->next_->prev_ = newCell;
		cell->next_ = newCell;
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

	

	//任意の場所に追加
	void insert(T val,int num)
	{
		CELL<T>* tmp = nullptr;
		tmp = node;

		for (int i = 0;i < num; i++)
		{
			tmp = tmp->next_;
		}

		//追加
		add(val,tmp);
	}
#pragma endregion

	//場所を探す
	bool seek(int num)
	{

		if (num > size_||num < 0)
		{
			return false;
		}
		return true;

	}

	//値の変更
	bool ChangeValue(T val,int num)
	{
		if (num > size_ || num < 0)
		{
			return false;
		}

		CELL<T>* tmp = nullptr;
		tmp = node;

		for (int i= 0; i <num;i++)
		{
			tmp = tmp->next_;
		}

		//変更
		tmp->val_ = val;

		return true;

	}

#pragma region 表示系統
	//要素の一覧を表示する
	void dump()
	{
		CELL<T>* ptr = node->next_;

		std::cout << "要素\n{" << std::endl;

		int elementCount = 0;
		for (int i = 0;i < size_-1; i++)
		{
			std::cout << ' ' << elementCount << ':' << '"' << ptr->val_ << '"' << std::endl;
			ptr = ptr->next_;
			elementCount++;
		}
		std::cout << ' ' << elementCount << ':' << '"' << ptr->val_ << '"' << std::endl;
		std::cout << "}" << std::endl;
	}

	//特定の要素を表示する
	void specificElement(int num)
	{
		CELL<T>* tmp = nullptr;
		tmp = node;

		int elemCount = -1;
		for (int i = 0; i < num; i++)
		{
			tmp = tmp->next_;
			elemCount++;
		}
		std::cout << elemCount <<':'<< tmp->val_ << '\n';
	}
#pragma endregion

	//削除
	bool Delete(int num)
	{
		if (num < 0 || num > size_)
		{
			return false;
		}

		CELL<T>* tmpCell = nullptr;
		tmpCell = node;

		for (int i = 0; i < num; i++)
		{
			tmpCell = tmpCell->next_;
		}

		tmpCell->prev_->next_ = tmpCell->next_;
		tmpCell->next_->prev_ = tmpCell->next_;

		delete tmpCell;

		size_--;

		return true;

	}

	int size()
	{
		return size_;
	}

	//要素のゲッター
	T GetElem(int num)
	{
		CELL<T>* tmp = nullptr;
		tmp = node;
		for (int i= 0;i <num;i++)
		{
			tmp = tmp->next_;
		}
		return tmp->val_;
	}

};

