#include "List.h"
#include <iostream>
#include <string>

template<typename T>
//�\���֐�
void Display(List<T>* list,int &operate,int& disOperate);
template<typename T>
//�}���֐�
void Insert(List<T>*list,int& operate);
template<typename T>
//�ҏW�֐�
void Edit(List<T>* list, int& operate);
template<typename T>
//�폜�֐�
void Delete(List<T>* list, int& operate);
int main()
{
	List<std::string>list;

	list.push_back("5");
	list.push_back("4");
	list.push_back("3");
	list.push_back("2");
	list.push_back("1");

	//�ꗗ��\������
	list.dump();

	//�v�f�̑���ԍ�
	int operate_ = 0;

	//�v�f�̕\���ԍ�
	int disOperate = 0;

	while (true)
	{
		std::cout << "[��ʂ̑���]" << std::endl;
		std::cout << "1.�v�f�̕\�� " << std::endl;
		std::cout << "2.�v�f�̑}��" << std::endl;
		std::cout << "3.�v�f�̕ҏW" << std::endl;
		std::cout << "4.�v�f�̍폜" << std::endl;
		std::cout << std::endl;

		std::cout << "------------------" << std::endl;
		std::cout << "�����I�����Ă�������" << std::endl;

		std::cout << std::endl;

		if (operate_ == 0)
		{
			//����ԍ����擾
			std::cin >> operate_;
		}
		//��ʃN���A����
		system("cls");

		switch (operate_)
		{
		case 1://�v�f�̕\��
			Display(&list, operate_, disOperate);
			break;

		case 2://�v�f�̑}��
			Insert(&list,operate_);
			break;

		case 3://�v�f�̕ҏW
			Edit(&list, operate_);
			break;

		case 4://�v�f�̍폜
			Delete(&list, operate_);
			break;

		}

	}


	return 0;
}

template<typename T>
void Display(List<T>* list, int& operate, int& disOperate)
{
	std::cout << "[�v�f�̕\��]" << std::endl;
	std::cout << "1.�v�f�̈ꗗ�\��" << std::endl;
	std::cout << "2.���Ԃ��w�肵�ėv�f��\��" << std::endl;
	std::cout << "9.�v�f����ɖ߂�" << std::endl;
	std::cout << std::endl;
	std::cout << "�����I�����Ă�������" << std::endl;

	//���삷��ԍ����擾����
	std::cin >> disOperate;

	//��ʃN���A����
	system("cls");

	switch (disOperate)
	{
	case 1:
		std::cout << "[�v�f�̈ꗗ�\��]" << std::endl;

		//�ꗗ��\������
		list->dump();
		std::cout << "�v�f��:" <<list->size() << std::endl;
		break;

	case 2:
		std::cout << "[���Ԃ��w�肵�ėv�f��\��]" << std::endl;
		std::cout << "�\���������v�f�̏��Ԃ��w�肵�Ă��������B" << std::endl;

		int num;
		std::cin >> num;
		std::cout << std::endl;

		//
		list->specificElement(num);
		break;
	case 9:
		operate = 0;
		break;
	}

	//case9�ȊO�̎�
	if (disOperate == 1 || disOperate == 2)
	{
		std::cout << std::endl;
		std::cout << "------------------" << std::endl;
		std::cout << "1.�v�f�̕\���ɖ߂�" << std::endl;
		std::cout << "2.�v�f�̑���ɖ߂�" << std::endl;

		//����ԍ����擾����
		std::cin >> disOperate;

		//��ʃN���A����
		system("cls");

		switch (disOperate)
		{
		case 1:
			operate = 1;
			break;
		case 2:
			operate = 0;
			break;
		}
	}
}
template<typename T>
void Insert(List<T>* list, int &operate)
{
	std::cout << "���X�g�v�f�̑}��]" << std::endl;
	std::cout << std::endl;
	std::cout << "�v�f��ǉ��ꏊ���w�肵�Ă��������B�Ō���ɒǉ�����ꍇ�͉������͂��Ȃ��ł��������B" << std::endl;

	std::string insert;
	while (std::getchar() != '\n');

	std::getline(std::cin, insert);

	//��̏ꍇ
	if (insert=="")
	{
		std::cout << "�ǉ�����v�f�̒l����͂��Ă�������" << std::endl;
		T element{};

		std::cin >> element;

		list->push_back(element);

		std::cout << "�v�f" << element << "��" << "�Ō���ɑ}������܂���" << std::endl;
	}
	else
	{
		//������𐮐��ɕϊ�����
		int elementCount = atoi(insert.c_str());
		std::cout << "�ǉ�����v�f�̒l����͂��Ă�������" << std::endl;
		T element{};

		std::cin >> element;

		list->insert(element,elementCount);

		std::cout << "�v�f" << element << "��" << elementCount << "�Ԗڂɑ}������܂���" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.�v�f����ɖ߂�" << std::endl;
	std::cin >> operate;
	system("cls");
	
	if (operate == 9)
	{
		operate = 0;
	}
	else
	{
		operate = 2;
	}
}

template<typename T>
void Edit(List<T>* list, int &operate)
{
	std::cout << "[�v�f�̕ҏW]" << std::endl;
	std::cout << std::endl;
	std::cout << "�ҏW�������v�f�̔ԍ�����͂��Ă�������" << std::endl;

	int elementNum;
	std::cin >> elementNum;

	std::cout << std::endl;

	//x�Ԗڂ�����ꍇ
	if (list->seek(elementNum))
	{
		std::cout << elementNum << "�Ԗڂ̗v�f�̕ύX����l����͂��Ă��������B" << std::endl;
		T element{};
		std::cin >> element;

		list->ChangeValue(element, elementNum);

		std::cout << std::endl;

		std::cout << elementNum << "�Ԗڂ̗v�f�̒l��" << '"' << element << '"' << "�ɕύX����܂���" << std::endl;
	}
	//x�Ԗڂ��Ȃ��ꍇ
	else
	{
		std::cout << elementNum << "�Ԗڂ̗v�f�̂�������܂���ł����B" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.�v�f����ɖ߂�" << std::endl;

	std::cin >> operate;
	system("cls");

	if (operate == 9)
	{
		operate = 0;
	}
	else
	{
		operate = 3;
	}

}

template<typename T>
void Delete(List<T>* list, int& operate)
{
	std::cout << "[�v�f�̍폜]" << std::endl;
	std::cout << std::endl;
	std::cout << "�폜�������v�f�̔ԍ����w�肵�Ă�������" << std::endl;

	int elementNum;
	std::cin >> elementNum;
	std::cout << std::endl;

	if (list->seek(elementNum))
	{
		std::cout << elementNum << "�Ԗڂ̗v�f" << '"' << list->GetElem(elementNum) << '"' << "�폜���܂���" << std::endl;

		list->Delete(elementNum);

		std::cout << std::endl;
	}
	else
	{
		std::cout << elementNum << "�Ԗڂ̗v�f�̂�������܂���ł����B" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.�v�f����ɖ߂�" << std::endl;

	std::cin >> operate;
	system("cls");

	if (operate == 9)
	{
		operate = 0;
	}
	else
	{
		operate = 4;
	}
}