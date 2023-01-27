#pragma once
class Enemy
{
public://メンバ関数

	Enemy();
	~Enemy();
	//初期化
	void Initialize();
	//更新
	void Update();

	//自作メンバ関数
	void Approach();//接近関数
	void Shot();//射撃関数
	void Leave();//離脱関数
	//シングルトン
	static Enemy* Getinstance();

private:

	//メンバ関数ポインタテーブル
	static void (Enemy:: *pFuncTable[])();

private://メンバ変数
	int phase_ = 0;
};

