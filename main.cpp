#include <stdio.h>
#include <stdlib.h>

//��r�֐�
void comparison(int flat, int rec)
{
	//��ʎ����ƍċA�I�Ȏ������r����
	int n = flat - rec;
	//��Βl���Ƃ�
	n = abs(n);
	if (flat > rec)
	{
		printf("��ʂ̂ق���%d�~�����B\n\n", n);
	}
	else
	{
		printf("�ċA�I�̂ق���%d�~�����B\n\n", n);
	}
}
//��ʓI�Ȓ����̌n�֐�
int FlatSalary(int FlatWage, int time)
{
	return FlatWage * time;
}
//�ċA�I�Ȓ����̌n�֐�
int RecursiveSalary(int salary, int time,int flatWage)
{
	//��ʓI�Ȓ���
	FlatSalary(flatWage, time);

	printf("��ʁ@ : %d���Ԃ̋��� = %d\n", time, flatWage);
	printf("�ċA�I : %d���Ԃ̋��� = %d\n", time, salary);
	//��r
	comparison(flatWage, salary);
	if(salary>1072)
	{
		return printf("%d���Ԃŏ�����\n", time);
	}
	
	
	time++;
	return RecursiveSalary(salary*2 - 50, time, flatWage);
}


int main()
{
	int salary = 100;//
	int hour = 1;//����
	//��ʑ̌n����
	int flatWage = 1072;
	
	RecursiveSalary(salary, hour,flatWage);
	
	return 0;
}