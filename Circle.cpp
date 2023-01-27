#include "Circle.h"
#include <stdio.h>
Circle::~Circle()
{
	printf("‹…‚ªÁ‚¦‚½\n\n");
}

void Circle::Draw()
{
	printf("‹…‚ªY‚Ü‚ê‚½\n\n");
}

void Circle::Size()
{
	float result = radius * radius * PI;
	printf("–ÊÏ:%f\n\n", result);
}
