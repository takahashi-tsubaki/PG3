#include <stdio.h>
#include <stdlib.h>
//�ċA�I�Ȓ����̌n�֐�
int Recursive(int n,int hour,int maxHour)
{
	//�ŏ���1����
	if (hour == 1)
	{
		return n;
	}
	else
	{
		//2���Ԗڈȍ~�̎���
		for (int i = 1; i < hour; i++)
		{
			n = ((n * 2) - 50);
		}

	}
	
	return n;
}

//��r�֐�
void comparison(int flat,int rec)
{
	//��ʎ����ƍċA�I�Ȏ������r����
	int n = flat - rec;
	//��Βl���Ƃ�
	n = abs(n);
	if (flat > rec)
	{
		printf("��ʂ̂ق���%d�~�����B\n",n);
	}
	else
	{
		printf("�ċA�I�̂ق���%d�~�����B\n", n);
	}
}

int main()
{
	
	int n = 100;//
	int hour = 1;//����
	int max = 8;//�ő�
	int result;//����

	//��ʑ̌n����
	int flatWage = 1072;

	for (int i = 0; i < max; i++)
	{

		result = Recursive(n, hour, max);
		printf("%d���Ԃ̋��� = %d\n", hour, result);
		hour++;

		comparison(flatWage, result);
	}
	
	return 0;
}