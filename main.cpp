#include <stdio.h>

template <typename Type>

//�������l��Ԃ��֐�
Type Min(Type a, Type b)
{
	if (a >= b)
	{
		return a;
	}
	return b;
}

//�e���v������
template<>

char Min(char a, char b)
{
	return printf("�����ȊO�͑���o���܂���");
}

//���C���֐�
int main()
{
	char a = 0, b = 0;

	printf("%d\n", Min<int>(10, 20));
	printf("%f\n", Min<float>(7.0f, 6.2f));
	printf("%lf\n",Min<double>(12,15));
	printf("%c\n", Min<char>(a, b));

	return 0;
}