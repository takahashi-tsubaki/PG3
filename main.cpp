#include "List.h"
#include <iostream>
#include <string>

template<typename T>
//•\¦ŠÖ”
void Display(List<T>* list,int &operate,int& disOperate);
template<typename T>
//‘}“üŠÖ”
void Insert(List<T>*list,int& operate);
template<typename T>
//•ÒWŠÖ”
void Edit(List<T>* list, int& operate);
template<typename T>
//íœŠÖ”
void Delete(List<T>* list, int& operate);
int main()
{
	List<std::string>list;

	list.push_back("5");
	list.push_back("4");
	list.push_back("3");
	list.push_back("2");
	list.push_back("1");

	//ˆê——‚ğ•\¦‚·‚é
	list.dump();

	//—v‘f‚Ì‘€ì”Ô†
	int operate_ = 0;

	//—v‘f‚Ì•\¦”Ô†
	int disOperate = 0;

	while (true)
	{
		std::cout << "[‰æ–Ê‚Ì‘€ì]" << std::endl;
		std::cout << "1.—v‘f‚Ì•\¦ " << std::endl;
		std::cout << "2.—v‘f‚Ì‘}“ü" << std::endl;
		std::cout << "3.—v‘f‚Ì•ÒW" << std::endl;
		std::cout << "4.—v‘f‚Ìíœ" << std::endl;
		std::cout << std::endl;

		std::cout << "------------------" << std::endl;
		std::cout << "‘€ì‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;

		std::cout << std::endl;

		if (operate_ == 0)
		{
			//‘€ì”Ô†‚ğæ“¾
			std::cin >> operate_;
		}
		//‰æ–ÊƒNƒŠƒA‚·‚é
		system("cls");

		switch (operate_)
		{
		case 1://—v‘f‚Ì•\¦
			Display(&list, operate_, disOperate);
			break;

		case 2://—v‘f‚Ì‘}“ü
			Insert(&list,operate_);
			break;

		case 3://—v‘f‚Ì•ÒW
			Edit(&list, operate_);
			break;

		case 4://—v‘f‚Ìíœ
			Delete(&list, operate_);
			break;

		}

	}


	return 0;
}

template<typename T>
void Display(List<T>* list, int& operate, int& disOperate)
{
	std::cout << "[—v‘f‚Ì•\¦]" << std::endl;
	std::cout << "1.—v‘f‚Ìˆê——•\¦" << std::endl;
	std::cout << "2.‡”Ô‚ğw’è‚µ‚Ä—v‘f‚ğ•\¦" << std::endl;
	std::cout << "9.—v‘f‘€ì‚É–ß‚é" << std::endl;
	std::cout << std::endl;
	std::cout << "‘€ì‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;

	//‘€ì‚·‚é”Ô†‚ğæ“¾‚·‚é
	std::cin >> disOperate;

	//‰æ–ÊƒNƒŠƒA‚·‚é
	system("cls");

	switch (disOperate)
	{
	case 1:
		std::cout << "[—v‘f‚Ìˆê——•\¦]" << std::endl;

		//ˆê——‚ğ•\¦‚·‚é
		list->dump();
		std::cout << "—v‘f”:" <<list->size() << std::endl;
		break;

	case 2:
		std::cout << "[‡”Ô‚ğw’è‚µ‚Ä—v‘f‚ğ•\¦]" << std::endl;
		std::cout << "•\¦‚µ‚½‚¢—v‘f‚Ì‡”Ô‚ğw’è‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;

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

	//case9ˆÈŠO‚Ì
	if (disOperate == 1 || disOperate == 2)
	{
		std::cout << std::endl;
		std::cout << "------------------" << std::endl;
		std::cout << "1.—v‘f‚Ì•\¦‚É–ß‚é" << std::endl;
		std::cout << "2.—v‘f‚Ì‘€ì‚É–ß‚é" << std::endl;

		//‘€ì”Ô†‚ğæ“¾‚·‚é
		std::cin >> disOperate;

		//‰æ–ÊƒNƒŠƒA‚·‚é
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
	std::cout << "ƒŠƒXƒg—v‘f‚Ì‘}“ü]" << std::endl;
	std::cout << std::endl;
	std::cout << "—v‘f‚ğ’Ç‰ÁêŠ‚ğw’è‚µ‚Ä‚­‚¾‚³‚¢BÅŒã”ö‚É’Ç‰Á‚·‚éê‡‚Í‰½‚à“ü—Í‚µ‚È‚¢‚Å‚­‚¾‚³‚¢B" << std::endl;

	std::string insert;
	while (std::getchar() != '\n');

	std::getline(std::cin, insert);

	//‹ó‚Ìê‡
	if (insert=="")
	{
		std::cout << "’Ç‰Á‚·‚é—v‘f‚Ì’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
		T element{};

		std::cin >> element;

		list->push_back(element);

		std::cout << "—v‘f" << element << "‚ª" << "ÅŒã”ö‚É‘}“ü‚³‚ê‚Ü‚µ‚½" << std::endl;
	}
	else
	{
		//•¶š—ñ‚ğ®”‚É•ÏŠ·‚·‚é
		int elementCount = atoi(insert.c_str());
		std::cout << "’Ç‰Á‚·‚é—v‘f‚Ì’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
		T element{};

		std::cin >> element;

		list->insert(element,elementCount);

		std::cout << "—v‘f" << element << "‚ª" << elementCount << "”Ô–Ú‚É‘}“ü‚³‚ê‚Ü‚µ‚½" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.—v‘f‘€ì‚É–ß‚é" << std::endl;
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
	std::cout << "[—v‘f‚Ì•ÒW]" << std::endl;
	std::cout << std::endl;
	std::cout << "•ÒW‚µ‚½‚¢—v‘f‚Ì”Ô†‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;

	int elementNum;
	std::cin >> elementNum;

	std::cout << std::endl;

	//x”Ô–Ú‚ª‚ ‚éê‡
	if (list->seek(elementNum))
	{
		std::cout << elementNum << "”Ô–Ú‚Ì—v‘f‚Ì•ÏX‚·‚é’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B" << std::endl;
		T element{};
		std::cin >> element;

		list->ChangeValue(element, elementNum);

		std::cout << std::endl;

		std::cout << elementNum << "”Ô–Ú‚Ì—v‘f‚Ì’l‚ª" << '"' << element << '"' << "‚É•ÏX‚³‚ê‚Ü‚µ‚½" << std::endl;
	}
	//x”Ô–Ú‚ª‚È‚¢ê‡
	else
	{
		std::cout << elementNum << "”Ô–Ú‚Ì—v‘f‚Ì‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.—v‘f‘€ì‚É–ß‚é" << std::endl;

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
	std::cout << "[—v‘f‚Ìíœ]" << std::endl;
	std::cout << std::endl;
	std::cout << "íœ‚µ‚½‚¢—v‘f‚Ì”Ô†‚ğw’è‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;

	int elementNum;
	std::cin >> elementNum;
	std::cout << std::endl;

	if (list->seek(elementNum))
	{
		std::cout << elementNum << "”Ô–Ú‚Ì—v‘f" << '"' << list->GetElem(elementNum) << '"' << "íœ‚µ‚Ü‚µ‚½" << std::endl;

		list->Delete(elementNum);

		std::cout << std::endl;
	}
	else
	{
		std::cout << elementNum << "”Ô–Ú‚Ì—v‘f‚Ì‚ªŒ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.—v‘f‘€ì‚É–ß‚é" << std::endl;

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