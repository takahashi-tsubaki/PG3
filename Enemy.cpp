#include "Enemy.h"
#include <stdio.h>


Enemy::Enemy(){}

Enemy::~Enemy(){}

void Enemy::Initialize()
{
	phase_ = 0;
}

void Enemy::Update()
{
	static_cast<size_t>(phase_);
	//メンバ関数ポインタに入っている関数を呼び出す
	(this->*pFuncTable[phase_])();
	phase_++;
	if (phase_ > 2)
	{
		phase_ = 0;
	}
}

void Enemy::Approach()
{
	printf("接近\n");
}

void Enemy::Shot()
{
	printf("射撃\n");
}

void Enemy::Leave()
{
	printf("離脱\n");
}

Enemy* Enemy::Getinstance()
{
	static Enemy instance;
	return &instance;
}

void (Enemy::* Enemy::pFuncTable[])() =
{
	&Enemy::Approach,//要素番号0
	&Enemy::Shot,    //要素番号1
	&Enemy::Leave    //要素番号2
};
