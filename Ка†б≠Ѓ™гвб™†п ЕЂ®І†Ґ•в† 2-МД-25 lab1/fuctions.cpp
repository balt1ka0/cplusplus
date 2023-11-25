// Лабораторная работа 1
// 2-МД-25 Краснокутская Елизавета
// 2023-10-28 ver1
// реализация функции

#include "functions.h"
#include <iostream>
using std::cin, std::cout;

double countIMT(double height, double weight) {
    double imt = weight / (height * height);
    if (imt < 18.5) cout << "Дефицит массы тела";
    else if (imt >= 18.5 && imt <= 25) cout << "Норма";
    else cout << "Профицит массы тела";
    return imt;
}