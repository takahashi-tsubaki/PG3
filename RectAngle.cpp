#include "RectAngle.h"
#include <stdio.h>
RectAngle::~RectAngle()
{
	printf("四角が消えた\n\n");
}

void RectAngle::Draw()
{
	printf("四角が産まれた\n\n");
}

void RectAngle::Size()
{
	int result = sizeX * sizeY;
	printf("面積:%d\n\n", result);
}