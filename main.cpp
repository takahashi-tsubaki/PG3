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
			n = n+((n * 2) - 50);
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
		printf("��ʂ̂ق���%d�~�����B\n\n",n);
	}
	else
	{
		printf("�ċA�I�̂ق���%d�~�����B\n\n", n);
	}
}

int main()
{
	
	int n = 100;//
	int hour = 1;//����
	int max = 8;//�ő�
	int result;//����

	//��ʑ̌n����
	int flatWage = 1072*hour;
	
	result = Recursive(n, hour, max);
	for (int i = 1; i < max; i++)
	{
		flatWage = 1072 * hour;
		
		printf("���   : %d���Ԃ̋��� = %d\n", hour, flatWage);
		printf("�ċA�I : %d���Ԃ̋��� = %d\n", hour, result);
		hour++;

		comparison(flatWage, result);
	}
	
	return 0;
}