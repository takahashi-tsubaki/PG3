#include <stdio.h>
#include <stdlib.h>


//�ċA�I�Ȓ����̌n�֐�
int RecursiveSalary(int salary,int previous)
{
	if (previous < salary)
	{
		return salary;
	}
	return RecursiveSalary(salary*2-50, previous);
}
//��r�֐�
void comparison()
{
	int rec = 100;//
	int oldRec = 0;
	int oneDays = 24;
	//��ʑ̌n����
	int flat = 1072;
	int totalFlat = 0;
	//��r
	for (int i = 1; i < oneDays; i++)
	{
		totalFlat = flat*i;
		oldRec = RecursiveSalary(rec, oldRec);
		printf("��ʁ@ : %d���Ԃ̋��� = %d\n", i, totalFlat);
		printf("�ċA�I : %d���Ԃ̋��� = %d\n", i, oldRec);

		//��ʎ����ƍċA�I�Ȏ������r����
		int n = totalFlat - oldRec;
		//��Βl���Ƃ�
		n = abs(n);
		if (totalFlat > oldRec)
		{
			printf("��ʂ̂ق���%d�~�����B\n\n", n);
		}
		else
		{
			printf("�ċA�I�̂ق���%d�~�����B\n\n", n);
			printf("%d���ԂōċA�I�Ȓ���������B\n\n", i);
			//�ċA�I�̂ق����������ꍇ�͔�r����߂�
			break;
		}

	}
	
}

int main()
{
	//������r
	comparison();
	return 0;
}