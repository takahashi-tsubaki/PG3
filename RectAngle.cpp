#include "RectAngle.h"
#include <stdio.h>
RectAngle::~RectAngle()
{
	printf("�l�p��������\n\n");
}

void RectAngle::Draw()
{
	printf("�l�p���Y�܂ꂽ\n\n");
}

void RectAngle::Size()
{
	int result = sizeX * sizeY;
	printf("�ʐ�:%d\n\n", result);
}