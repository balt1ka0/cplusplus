// Лабораторная работа 1
// 2-МД-25 Краснокутская Елизавета
// 2023-10-28 ver1
#include <iostream>
#include "functions.h"

using std::cin, std::cout;


int main(int argc, char* argv[]) {
    std::setlocale(LC_ALL, "ru");

    cout << "2-МД-25 Краснокутская Елизавета, программа выводит аргументы функции и считает индекс массы тела по весу в кг и росту в метрах\n";
    double weight, height;
    cout << "Количество аргументов " << argc << '\n';
    for (int i = 0; i < argc; ++i) {
        cout << argv[i] << '\n';
    }
    cout << "Введите массу тела (в кг): ";
    cin >> weight;
    cout << "Введите рост (в м): ";
    cin >> height;
    countIMT(height, weight);
    return 0;
}
