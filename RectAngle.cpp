#include "RectAngle.h"
#include <stdio.h>
RectAngle::~RectAngle()
{
	printf("lŠp‚ªÁ‚¦‚½\n\n");
}

void RectAngle::Draw()
{
	printf("lŠp‚ªY‚Ü‚ê‚½\n\n");
}

void RectAngle::Size()
{
	int result = sizeX * sizeY;
	printf("–ÊÏ:%d\n\n", result);
}