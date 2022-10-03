#include <stdio.h>

template <typename Type>

//小さい値を返す関数
Type Min(Type a, Type b)
{
	if (a >= b)
	{
		return a;
	}
	return b;
}

//テンプレ解除
template<>

char Min(char a, char b)
{
	return printf("数字以外は代入出来ません");
}

//メイン関数
int main()
{
	char a = 0, b = 0;

	printf("%d\n", Min<int>(10, 20));
	printf("%f\n", Min<float>(7.0f, 6.2f));
	printf("%lf\n",Min<double>(12,15));
	printf("%c\n", Min<char>(a, b));

	return 0;
}