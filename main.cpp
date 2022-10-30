#include <stdio.h>
#include <stdlib.h>
#include <random>
#include"windows.h"

typedef void (*pFunc)(int*);
void callBack(int* s);
void setTimeout(pFunc p, int second);
int Scanf(int num);
void lottery(int num);
int main()
{
	int num = 0;
	pFunc p;

	Scanf(num);
	p = callBack;
	setTimeout(p, 3);
	num = num;

	lottery(num);

	return 0;
}

void callBack(int* s)
{
	printf("%d•bŒã‚ÉÀs‚³‚ê‚é‚æ\n", *s);
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
		printf("‹ô”\n");
	}
	else if (scanNum % 2 == 1)
	{
		printf("Šï”\n");
	}
	
	return scanNum;
}


void lottery(int num)
{
	srand(time(nullptr));
	int lotNum = rand() % 6 + 1;
	printf("‚³‚¢‚±‚ë‚Ì–Ú = %d\n", lotNum);
	if ((num % 2 == 0&&lotNum % 2 == 0 ) || (num % 2 == 1&&lotNum % 2 == 1 ))
	{
		printf("“–‚½‚è\n");
	}
	else
	{
		printf("ƒnƒYƒŒ\n");
	}
}


