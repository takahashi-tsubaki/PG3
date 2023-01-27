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
	//�����o�֐��|�C���^�ɓ����Ă���֐����Ăяo��
	(this->*pFuncTable[phase_])();
	phase_++;
	if (phase_ > 2)
	{
		phase_ = 0;
	}
}

void Enemy::Approach()
{
	printf("�ڋ�\n");
}

void Enemy::Shot()
{
	printf("�ˌ�\n");
}

void Enemy::Leave()
{
	printf("���E\n");
}

Enemy* Enemy::Getinstance()
{
	static Enemy instance;
	return &instance;
}

void (Enemy::* Enemy::pFuncTable[])() =
{
	&Enemy::Approach,//�v�f�ԍ�0
	&Enemy::Shot,    //�v�f�ԍ�1
	&Enemy::Leave    //�v�f�ԍ�2
};
