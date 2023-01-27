#pragma once
//基底クラス
class IShape
{

public:

	//デストラクタ
	virtual ~IShape();
	//描画
	virtual void Draw() = 0;
	//面積を求める
	virtual void Size() = 0;
};
