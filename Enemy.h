#pragma once
class Enemy
{
public://��I�����o�ϐ�

	static int EnemyCount;

public://�����o�֐�

	Enemy(){EnemyCount++;}
	~Enemy(){ EnemyCount--;}

	void Destroy();

private://�����o�ϐ�

};

