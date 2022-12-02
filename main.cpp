#include "List.h"
#include <iostream>
#include <string>

template<typename T>
//表示関数
void Display(List<T>* list,int &operate,int& disOperate);
template<typename T>
//挿入関数
void Insert(List<T>*list,int& operate);
template<typename T>
//編集関数
void Edit(List<T>* list, int& operate);
template<typename T>
//削除関数
void Delete(List<T>* list, int& operate);
template <typename T>
void Sort(List<T>* list, int& operate);
int main()
{
	List<std::string>list;

	list.push_back("5");
	list.push_back("4");
	list.push_back("3");
	list.push_back("2");
	list.push_back("1");

	//一覧を表示する
	list.dump();

	//要素の操作番号
	int operate_ = 0;

	//要素の表示番号
	int disOperate = 0;

	while (true)
	{
		std::cout << "[画面の操作]" << std::endl;
		std::cout << "1.要素の表示 " << std::endl;
		std::cout << "2.要素の挿入" << std::endl;
		std::cout << "3.要素の編集" << std::endl;
		std::cout << "4.要素の削除" << std::endl;
		std::cout << "5.要素の並び替え(オプション)" << std::endl;
		std::cout << std::endl;

		std::cout << "------------------" << std::endl;
		std::cout << "操作を選択してください" << std::endl;

		std::cout << std::endl;

		if (operate_ == 0)
		{
			//操作番号を取得
			std::cin >> operate_;
		}
		//画面クリアする
		system("cls");

		switch (operate_)
		{
		case 1://要素の表示
			Display(&list, operate_, disOperate);
			break;

		case 2://要素の挿入
			Insert(&list,operate_);
			break;

		case 3://要素の編集
			Edit(&list, operate_);
			break;

		case 4://要素の削除
			Delete(&list, operate_);
			break;
		case 5://任意の場所と任意の場所を入れ替え
			Sort(&list, operate_);
			break;
		default:
			operate_ = 0;
			break;
		}

	}


	return 0;
}

template<typename T>
void Display(List<T>* list, int& operate, int& disOperate)
{
	std::cout << "[要素の表示]" << std::endl;
	std::cout << "1.要素の一覧表示" << std::endl;
	std::cout << "2.順番を指定して要素を表示" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;
	std::cout << std::endl;
	std::cout << "操作を選択してください" << std::endl;

	//操作する番号を取得する
	std::cin >> disOperate;

	//画面クリアする
	system("cls");

	switch (disOperate)
	{
	case 1:
		std::cout << "[要素の一覧表示]" << std::endl;

		//一覧を表示する
		list->dump();
		std::cout << "要素数:" <<list->size() << std::endl;
		break;

	case 2:
		std::cout << "[順番を指定して要素を表示]" << std::endl;
		std::cout << "表示したい要素の順番を指定してください。" << std::endl;

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

	//case9以外の時
	if (disOperate == 1 || disOperate == 2)
	{
		std::cout << std::endl;
		std::cout << "------------------" << std::endl;
		std::cout << "1.要素の表示に戻る" << std::endl;
		std::cout << "2.要素の操作に戻る" << std::endl;

		//操作番号を取得する
		std::cin >> disOperate;

		//画面クリアする
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
	std::cout << "リスト要素の挿入]" << std::endl;
	std::cout << std::endl;
	std::cout << "要素を追加場所を指定してください。最後尾に追加する場合は何も入力しないでください。" << std::endl;

	std::string insert;
	while (std::getchar() != '\n');

	std::getline(std::cin, insert);

	//空の場合
	if (insert=="")
	{
		std::cout << "追加する要素の値を入力してください" << std::endl;
		T element{};

		std::cin >> element;

		list->push_back(element);

		std::cout << "要素" << element << "が" << "最後尾に挿入されました" << std::endl;
	}
	else
	{
		//文字列を整数に変換する
		int elementCount = atoi(insert.c_str());
		std::cout << "追加する要素の値を入力してください" << std::endl;
		T element{};

		std::cin >> element;

		list->insert(element,elementCount);

		std::cout << "要素" << element << "が" << elementCount << "番目に挿入されました" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;
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
	std::cout << "[要素の編集]" << std::endl;
	std::cout << std::endl;
	std::cout << "編集したい要素の番号を入力してください" << std::endl;

	int elementNum;
	std::cin >> elementNum;

	std::cout << std::endl;

	//x番目がある場合
	if (list->seek(elementNum))
	{
		std::cout << elementNum << "番目の要素の変更する値を入力してください。" << std::endl;
		T element{};
		std::cin >> element;

		list->ChangeValue(element, elementNum);

		std::cout << std::endl;

		std::cout << elementNum << "番目の要素の値が" << '"' << element << '"' << "に変更されました" << std::endl;
	}
	//x番目がない場合
	else
	{
		std::cout << elementNum << "番目の要素のが見つかりませんでした。" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;

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
	std::cout << "[要素の削除]" << std::endl;
	std::cout << std::endl;
	std::cout << "削除したい要素の番号を指定してください" << std::endl;

	int elementNum;
	std::cin >> elementNum;
	std::cout << std::endl;

	if (list->seek(elementNum))
	{
		std::cout << elementNum << "番目の要素" << '"' << list->GetElem(elementNum) << '"' << "削除しました" << std::endl;

		list->Delete(elementNum);

		std::cout << std::endl;
	}
	else
	{
		std::cout << elementNum << "番目の要素のが見つかりませんでした。" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;

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

template<typename T>
void Sort(List<T>* list, int& operate)
{
	std::cout << "[要素の並び替え]" << std::endl;
	std::cout << std::endl;
	std::cout << "並び替え方法を選択してください" << std::endl;
	std::cout << "1.昇順で並び替える" << std::endl;
	std::cout << "2.降順で並び替える" << std::endl;

	int sortOperation;

	std::cin >> sortOperation;

	switch (sortOperation)
	{
	case 1:
	{
		list->sortBy(true);
		std::cout << "リストの要素を昇順で並び替えました" << std::endl;
	}
	break;
	case 2:
		list->sortBy(false);
		std::cout << "リストの要素を降順で並び替えました" << std::endl;

		break;
	default:
		break;
	}

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "9.要素操作に戻る" << std::endl;

	std::cin >> operate;
	system("cls");

	if (operate == 9)
	{
		operate = 0;
	}
	else
	{
		operate = 5;
	}
}