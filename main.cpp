#include <stdio.h>

template <typename Type>

//�������l��Ԃ��֐�
Type Min(Type a, Type b)
{
	if (a >= b)
	{
		return b;
	}
	return b;
}

//�e���v������
template<>

char Min(char a, char b)
{
	return 0;
}

//���C���֐�
int main()
{
	char a = 0, b = 0;

	printf("%d\n", Min<int>(10, 20));
	printf("%f\n", Min<float>(7.0f, 6.2f));
	printf("%lf\n",Min<double>(12,15));

	if (Min<char>(a, b)==0)
	{
		printf("�����ȊO�͑���o���܂���\n");
	}
	
	return 0;
}