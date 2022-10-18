#include <stdio.h>
#include <stdlib.h>


//再帰的な賃金体系関数
int RecursiveSalary(int salary,int previous)
{
	if (previous < salary)
	{
		return salary;
	}
	return RecursiveSalary(salary*2-50, previous);
}
//比較関数
void comparison()
{
	int rec = 100;//
	int oldRec = 0;
	int oneDays = 24;
	//一般体系賃金
	int flat = 1072;
	int totalFlat = 0;
	//比較
	for (int i = 1; i < oneDays; i++)
	{
		totalFlat = flat*i;
		oldRec = RecursiveSalary(rec, oldRec);
		printf("一般　 : %d時間の給料 = %d\n", i, totalFlat);
		printf("再帰的 : %d時間の給料 = %d\n", i, oldRec);

		//一般時給と再帰的な時給を比較する
		int n = totalFlat - oldRec;
		//絶対値をとる
		n = abs(n);
		if (totalFlat > oldRec)
		{
			printf("一般のほうが%d円高い。\n\n", n);
		}
		else
		{
			printf("再帰的のほうが%d円高い。\n\n", n);
			printf("%d時間で再帰的な賃金が上回る。\n\n", i);
			//再帰的のほうが上回った場合は比較をやめる
			break;
		}

	}
	
}

int main()
{
	//賃金比較
	comparison();
	return 0;
}