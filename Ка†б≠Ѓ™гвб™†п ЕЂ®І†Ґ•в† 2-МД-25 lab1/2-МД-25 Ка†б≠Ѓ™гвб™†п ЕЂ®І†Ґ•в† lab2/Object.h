//lab2
//2-МД-25 Краснокутская Елизавета
//2023-11-01

#pragma once
#include <iostream>

namespace Objects
{
    struct characters
    {
        std::string name;
        int score;
        float rating;
    };
};

void Test();
void Print(Objects::characters cort);

#pragma once
