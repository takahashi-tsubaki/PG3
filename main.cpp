#include"windows.h"
#include <stdio.h>
#include <iostream>
#include "SceneManager.h"

int main()
{
    SceneManager* sceneMan = SceneManager::GetInstance();
   
    int sceneNum = 0;
    
    while (sceneNum < 4)
    {
        printf("sceneNum = %d\n", sceneNum);

        Sleep(1 * 1000);

        sceneMan->ChangeScene(sceneNum);
    }

    system("cls");
    
    system("pause");
    return 0;
}



