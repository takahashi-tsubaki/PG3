#include <stdio.h>
#include <stdlib.h>
#include <random>
int RandomNumber(int num)
{
	if (num % 2 == 0)
	{
		num = rand() + 1;
	}
	else
	{
		num = rand();
	}

	return num;
}

int Scanf(int num)
{
	char str[5];
	if (scanf("%s", str) == '����')
	{
		num %= 0;
	}
	else if(scanf("%s", str) == '�')
	{
		num %= 1;
	}
	else
	{
		printf("������x���͂��Ă�������");
	}
	return num;
}

int main()
{
	
	int outputNum = 0;

	int(*calc)(int);

	calc = Scanf;
	printf("%d", calc(outputNum));

	calc = RandomNumber;
	printf("%d", calc(outputNum));


	printf("main = %p\n", main);
	
	return 0;
}