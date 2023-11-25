//lab2
//2-МД-25 Краснокутская Елизавета
//2023-11-01

#include "Object.h"

using namespace Objects;

void Test()
{
    characters cort = { "Levi", 10, 3.2 };
}

void Print(Objects::characters s)
{
    std::cout << "Оценка волейболиста: " << std::endl;
    std::cout << "Имя: " << s.name << std::endl;
    std::cout << "Среднее кол-во забитых мячей: " << s.score << std::endl;
    std::cout << "Средняя оценка игрока: " << s.rating << std::endl;
    std::cout << " " << std::endl;

}