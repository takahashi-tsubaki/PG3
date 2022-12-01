#pragma once
#include <iostream>

template <typename T>
struct CELL
{
	T val_;//�l
	CELL* prev_ = nullptr;//�O�̃Z��
	CELL* next_ = nullptr;//���̃Z��

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

	List()//�R���X�g���N�^
	{
		node = new CELL<T>();
		size_ = 0;
	}

	~List()//�R���X�g���N�^
	{

	}

#pragma region �ǉ�����n�� 
	//�w�����Z���̌��ɒl��ǉ�
	void add(T val,CELL<T>* cell)
	{
		//�V�K�Z���̍쐬
		CELL<T>* newCell =  new CELL<T>(val, cell, cell->next_);
		cell->next_->prev_ = newCell;
		cell->next_ = newCell;
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

	

	//�C�ӂ̏ꏊ�ɒǉ�
	void insert(T val,int num)
	{
		CELL<T>* tmp = nullptr;
		tmp = node;

		for (int i = 0;i < num; i++)
		{
			tmp = tmp->next_;
		}

		//�ǉ�
		add(val,tmp);
	}
#pragma endregion

	//�ꏊ��T��
	bool seek(int num)
	{

		if (num > size_||num < 0)
		{
			return false;
		}
		return true;

	}

	//�l�̕ύX
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

		//�ύX
		tmp->val_ = val;

		return true;

	}

#pragma region �\���n��
	//�v�f�̈ꗗ��\������
	void dump()
	{
		CELL<T>* ptr = node->next_;

		std::cout << "�v�f\n{" << std::endl;

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

	//����̗v�f��\������
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

	//�폜
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

	//�v�f�̃Q�b�^�[
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

