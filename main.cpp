#include <functional>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include"windows.h"


int main()
{
	
	char inputNum;//入力した数字を代入する変数
	int outputNum = 0;
	int waitTime = 3;//待ち時間用変数
	
	printf("数字を代入してください\n");
	scanf_s("%c",&inputNum);
	if (inputNum % 2 == 0)
	{
		printf("偶数\n");
	}
	else if(inputNum % 2 == 1)
	{
		printf("奇数\n");
	}

	//抽選関数
	std::function<int()> lottery = [&outputNum]()
	{
		srand(time(nullptr));
		outputNum = rand()%2;
		return outputNum;
	};

	//タイムアウトのセッター
	std::function<void(std::function<void()>, const int)> setTimeOut = [=](std::function<void()> fx, int time) 
	{
		fx(); Sleep(time * 1000); 
	};

	//比較関数
	std::function<void(char, int)>compation = [=](char input, int output) {
		printf("%d\n", output);
		if (output % 2 == 0)
		{
			printf("偶数\n");
		}
		else
		{
			printf("奇数\n");
		}
		input %2 == output ? printf("当たり") : printf("はずれ");
	};

	setTimeOut(lottery, waitTime);

	compation(inputNum, outputNum);

	return 0;
}



