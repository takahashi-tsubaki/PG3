#include <stdio.h>
#include <stdlib.h>
#include <random>
#include"windows.h"

typedef void (*pFunc)(int*);
void DisplayResult(int* s);
void setTimeout(pFunc p, int second);
int Scanf(int num);
void lottery(int num);
int main()
{
	int num = 0;
	pFunc p;

	Scanf(num);
	p = DisplayResult;
	setTimeout(p, 3);
	num = num;

	lottery(num);

	return 0;
}

void DisplayResult(int* s)
{
	printf("%d秒後に実行されるよ\n", *s);
}
void setTimeout(pFunc p, int second)
{
	Sleep(second * 1000);

	p(&second);
}

int Scanf(int num)
{
	int scanNum = 0;
	scanf_s("%d", &scanNum);
	if (scanNum % 2 == 0)
	{
		printf("偶数\n");
	}
	else if (scanNum % 2 == 1)
	{
		printf("奇数\n");
	}
	
	return scanNum;
}


void lottery(int num)
{
	srand(time(nullptr));
	int lotNum = rand() % 6 + 1;
	printf("さいころの目 = %d\n", lotNum);
	if ((num % 2 == 0&&lotNum % 2 == 0 ) || (num % 2 == 1&&lotNum % 2 == 1 ))
	{
		printf("当たり\n");
	}
	else
	{
		printf("ハズレ\n");
	}
}


