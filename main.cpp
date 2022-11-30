#include <stdlib.h>
#include <iostream>
#include"windows.h"

//���ȎQ�ƍ\����
typedef struct cell
{
	int val;
	struct cell* prev;//�O�̃Z��
	struct cell* next;//���̃Z��

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


	//�擪�ɓ��e����̃Z����錾
	CELL head;
	head.next = nullptr;
	head.prev = nullptr;

	while (1)
	{
		printf("���Ԗڂ̃Z���̌��ɑ�����܂���?\n");
		scanf_s("%d", &iterator);

		printf("�}������l�����Ă�������\n");
		scanf_s("%d", &inputval);

		insertCell = getInsertCellAddress(&head, iterator);
		create(insertCell, inputval);

		index(&head);
	}
	return 0;
}

void create(CELL* currentCell, int val)
{
	//�V�K�ɃZ�����쐬
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	newCell->val = val;
	newCell->prev = currentCell;
	newCell->next = currentCell->next;

	//�w�肵���Z���̎��̃Z���́u�O�̃Z���̃|�C���^�v�ɐV�K�Z���̃A�h���X����
	if (currentCell->next)
	{
		CELL* nextCell = currentCell->next;
		nextCell->prev = newCell;
	}

	//�w�肵���Z���́u���̃|�C���^�̃Z���v�ɐV�K�Z���̃A�h���X����
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
		printf("%1d\n", endCell->val);//5���܂ŉE����
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