#include <stdlib.h>
#include <iostream>
#include"windows.h"

//自己参照構造体
typedef struct cell
{
	int val;
	struct cell* prev;//前のセル
	struct cell* next;//次のセル

}CELL;

void* malloc(size_t size);
void create(CELL* currentCell, int val);
void index(CELL* endCell);
CELL* getInsertCellAddress(CELL* endCell, int ite);

int main()
{
	int iterator;
	int inputval;
	CELL* insertCell;


	//先頭に内容が空のセルを宣言
	CELL head;
	head.next = nullptr;
	head.prev = nullptr;

	while (1)
	{
		printf("何番目のセルの後ろに代入しますか?\n");
		scanf_s("%d", &iterator);

		printf("挿入する値を入れてください\n");
		scanf_s("%d", &inputval);

		insertCell = getInsertCellAddress(&head, iterator);
		create(insertCell, inputval);

		index(&head);
	}
	return 0;
}

void create(CELL* currentCell, int val)
{
	//新規にセルを作成
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	//指定したセルの次のセルの「前のセルのポインタ」に新規セルのアドレスを代入
	if (currentCell->next)
	{
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	//指定したセルの「次のポインタのセル」に新規セルのアドレスを代入
	currentCell->next = newCell;

}

void index(CELL* endCell)
{
	int no = 1;
	while (endCell->next != nullptr)
	{
		endCell = endCell->next;
		printf("%d\n", no);
		printf("%p\n", endCell->prev);
		printf("%1d\n", endCell->val);//5桁まで右揃え
		printf("(%p)\n", endCell);
		printf("%p\n", endCell->next);
		no++;
	}
}

CELL* getInsertCellAddress(CELL* endCell, int ite)
{
	for (int i = 0; i < ite; i++)
	{
		if (endCell->next)
		{
			endCell = endCell->next;
		}
		else
		{
			break;
		}
	}
	return endCell;
}