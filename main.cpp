#include"windows.h"
#include <stdio.h>
#include <iostream>
#include "Circle.h"
#include "RectAngle.h"
#include "IShape.h"

int main() {
	// サイズ決め
	int size = 2;
	IShape* ishape[] =
	{
		new Circle,
		new RectAngle
	};

	// 描画
	for (int i = 0; i < size; i++)
	{
		ishape[i]->Draw();
		ishape[i]->Size();
	}

	Sleep(2 * 1000);
	
	// 消す
	for (int i = 0; i < size; i++)
	{
		ishape[i]->~IShape();
	}

	system("pause");
	return 0;
}

