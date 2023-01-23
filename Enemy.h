#pragma once
class Enemy
{
public://情的メンバ変数

	static int EnemyCount;

public://メンバ関数

	Enemy(){EnemyCount++;}
	~Enemy(){ EnemyCount--;}

	void Destroy();

private://メンバ変数

};

