#include <functional>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include"windows.h"


int main()
{
	
	char inputNum;//���͂���������������ϐ�
	int outputNum = 0;
	int waitTime = 3;//�҂����ԗp�ϐ�
	
	printf("�����������Ă�������\n");
	scanf_s("%c",&inputNum);
	if (inputNum % 2 == 0)
	{
		printf("����\n");
	}
	else if(inputNum % 2 == 1)
	{
		printf("�\n");
	}

	//���I�֐�
	std::function<int()> lottery = [&outputNum]()
	{
		srand(time(nullptr));
		outputNum = rand()%2;
		return outputNum;
	};

	//�^�C���A�E�g�̃Z�b�^�[
	std::function<void(std::function<void()>, const int)> setTimeOut = [=](std::function<void()> fx, int time) 
	{
		fx(); Sleep(time * 1000); 
	};

	//��r�֐�
	std::function<void(char, int)>compation = [=](char input, int output) {
		printf("%d\n", output);
		if (output % 2 == 0)
		{
			printf("����\n");
		}
		else
		{
			printf("�\n");
		}
		input %2 == output ? printf("������") : printf("�͂���");
	};

	setTimeOut(lottery, waitTime);

	compation(inputNum, outputNum);

	return 0;
}



