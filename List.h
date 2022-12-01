#pragma once
#include <iostream>

template <typename T>
struct CELL
{
	T val_;//�l
	CELL* prev_ = nullptr;//�O�̃Z��
	CELL* next_ = nuolptr;//���̃Z��

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

	List()//�R���X�g���N�^
	{
		node = new CELL<T>();
		size_ = 0;
	}

	~List()//�R���X�g���N�^
	{

	}

	//�w�����Z���̌��ɒl��ǉ�
	void Add(T val,CELL<T>* cell)
	{
		//�V�K�Z���̍쐬
		CELL<T>* newCell =  new CELL<T>* (val, cell, cell->next_);
		cell->prev_ = newCell;
		cell = newCell;
		size_++;
	}

	//��ԑO�ɒǉ�
	void push_front(T val)
	{
		CELL<T>* cur = node;
		add(val,cur);
	}
	
	//��Ԍ��ɒǉ�
	void push_back(T val)
	{
		CELL<T>* cur = node->prev_;
		add(val,cur);
	}

	//�ꗗ��\������
	void dump()
	{
		

	}


	int size()
	{
		return size_;
	}

	//�Z���̎擾
	CELL<T> GetCell(int val)
	{
		CELL<T>* tmp = node;

		//�C�ӂ̏ꏊ�܂ňړ�������
		for (int i = 0; i < val; i++)
		{
			tmp = tmp->next_;
		}
		return tmp;
	}
};

