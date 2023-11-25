//lab2
//2-МД-25 Краснокутская Елизавета
//2023-11-01

#include <iostream>
#include "Object.h"
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian"); // Подключение кириллицы
    std::cout << "Добрый день! Лабораторная работа №2. Выполнила Краснокутская Елизавета.\n";
    std::cout << " " << std::endl;

    Test();

    const int OBJECTS_SIZE = 3;

    Objects::characters objects[OBJECTS_SIZE];
    string names[OBJECTS_SIZE] = { "Levi", "Kevin", "Bob" };
    int goals[OBJECTS_SIZE] = { 10, 15, 18 };
    float ratings[OBJECTS_SIZE] = { 3.2, 4.1, 4.9 };

    for (int i = 0; i < OBJECTS_SIZE; i++) /// Заполнение массива значениями
    {
        objects[i].name = names[i];
        objects[i].score = goals[i];
        objects[i].rating = ratings[i];

        Print(objects[i]);
    }
}