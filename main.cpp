#include <stdio.h>
#include <stdlib.h>

//比較関数
void comparison(int flat, int rec)
{
	//一般時給と再帰的な時給を比較する
	int n = flat - rec;
	//絶対値をとる
	n = abs(n);
	if (flat > rec)
	{
		printf("一般のほうが%d円高い。\n\n", n);
	}
	else
	{
		printf("再帰的のほうが%d円高い。\n\n", n);
	}
}
//一般的な賃金体系関数
int FlatSalary(int FlatWage, int time)
{
	return FlatWage * time;
}
//再帰的な賃金体系関数
int RecursiveSalary(int salary, int time,int flatWage)
{
	//一般的な賃金
	FlatSalary(flatWage, time);

	printf("一般　 : %d時間の給料 = %d\n", time, flatWage);
	printf("再帰的 : %d時間の給料 = %d\n", time, salary);
	//比較
	comparison(flatWage, salary);
	if(salary>1072)
	{
		return printf("%d時間で上回った\n", time);
	}
	
	
	time++;
	return RecursiveSalary(salary*2 - 50, time, flatWage);
}


int main()
{
	int salary = 100;//
	int hour = 1;//時間
	//一般体系賃金
	int flatWage = 1072;
	
	RecursiveSalary(salary, hour,flatWage);
	
	return 0;
}