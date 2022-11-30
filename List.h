#pragma once
#include <iostream>

template <typename T>
struct CELL
{
	int val_;//�l
	CELL* prev_ = nullptr;//�O�̃Z��
	CELL* next_ = nuolptr;//���̃Z��

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

	List()//�R���X�g���N�^
	{
		node = new CELL<T>();
	}

	//�w�����Z���̌��ɒl��ǉ�
	void Add(T val,CELL<T>* cell)
	{
		//�V�K�Z���̍쐬
		CELL<T>* newCell = Create<T>*(val,cell,cell->next_);
		cell->prev_ = newCell;
		cell = newCell;
		
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

