#include "Circle.h"
#include <stdio.h>
Circle::~Circle()
{
	printf("����������\n\n");
}

void Circle::Draw()
{
	printf("�����Y�܂ꂽ\n\n");
}

void Circle::Size()
{
	float result = radius * radius * PI;
	printf("�ʐ�:%f\n\n", result);
}
