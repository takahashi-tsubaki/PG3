#pragma once
#pragma once
#include "IShape.h"
class RectAngle :public IShape
{
public:
	~RectAngle()override;
	void Draw()override;
	void Size()override;
private:
	int sizeX = 5, sizeY = 5;
};

