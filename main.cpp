#include"windows.h"
#include <stdio.h>
#include <iostream>
#include "Enemy.h"

int main()
{
    Enemy* enemy = nullptr;
    enemy = Enemy::Getinstance();
    enemy->Initialize();

    while (true)
    {
        enemy->Update();

        Sleep(2 * 1000);
    }

    system("pause");
    return 0;
}



