#include <stdio.h>
#include <list>
#include <iostream>

int main()
{
    std::list<const char*> yamanoteStation = {
       "Tokyo","Kanda","Akihabara","Okatimati","Ueno",
       "Uguisudani","Nippori","Tabata","Komagome","Sugamo",
       "Ootuka","Ikebukuro","Mejiro","Takadanobaba","sinokubo",
       "Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro",
       "Gotanda","Oosaki","Shinagawa","Tamati","Hamamatutyou",
       "Shinbasi","Yurakutyou"
    };

    int num = 0;

    std::cout << "1970" << std::endl;
    for (auto itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
        if (num > 5)
        {
            std::cout << *itr << std::endl;
            num = 0;
        }
        else
        {
            std::cout << *itr << ", ";
            num++;
        }
    }

    std::cout  << std::endl;

    num = 0;
    std::cout << "2019"<<std::endl;
    for (auto itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
        if (*itr == "Tabata") {
            itr = yamanoteStation.insert(itr, "Nisinippori");
            ++itr;
        }
    }
    for (auto itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
        if (num > 5)
        {
            std::cout << *itr << std::endl;
            num = 0;
        }
        else
        {
            std::cout << *itr << ", ";
            num++;
        }
    }

    std::cout << "\n" << std::endl;

    num = 0;
    std::cout << "2022" << std::endl;
    for (auto itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
        if (*itr == "Tamati") {
            itr = yamanoteStation.insert(itr, "Takanawagettoway");
            ++itr;
        }
    }
    for (auto itr = yamanoteStation.begin(); itr != yamanoteStation.end(); ++itr) {
        if (num > 5)
        {
            std::cout << *itr << std::endl;
            num = 0;
        }
        else
        {
            std::cout << *itr << ", ";
            num++;
        }
        if (*itr == "Yurakutyou")
        {
            std::cout <<  std::endl;
        }
    }

    system("pause");

    return 0;
}



