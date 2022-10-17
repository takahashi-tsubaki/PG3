#include <stdio.h>
#include <stdlib.h>
//再帰的な賃金体系関数
int Recursive(int n,int hour,int maxHour)
{
	//最初の1時間
	if (hour == 1)
	{
		return n;
	}
	else
	{
		//2時間目以降の時給
		for (int i = 1; i < hour; i++)
		{
			n = n+((n * 2) - 50);
		}

	}
	
	return n;
}

//比較関数
void comparison(int flat,int rec)
{
	//一般時給と再帰的な時給を比較する
	int n = flat - rec;
	//絶対値をとる
	n = abs(n);
	if (flat > rec)
	{
		printf("一般のほうが%d円高い。\n\n",n);
	}
	else
	{
		printf("再帰的のほうが%d円高い。\n\n", n);
	}
}

int main()
{
	
	int n = 100;//
	int hour = 1;//時間
	int max = 8;//最大
	int result;//結果

	//一般体系賃金
	int flatWage = 1072*hour;
	
	result = Recursive(n, hour, max);
	for (int i = 1; i < max; i++)
	{
		flatWage = 1072 * hour;
		
		printf("一般   : %d時間の給料 = %d\n", hour, flatWage);
		printf("再帰的 : %d時間の給料 = %d\n", hour, result);
		hour++;

		comparison(flatWage, result);
	}
	
	return 0;
}