//lab2
//2-��-25 ������������� ���������
//2023-11-01

#include "Object.h"

using namespace Objects;

void Test()
{
    characters cort = { "Levi", 10, 3.2 };
}

void Print(Objects::characters s)
{
    std::cout << "������ ������������: " << std::endl;
    std::cout << "���: " << s.name << std::endl;
    std::cout << "������� ���-�� ������� �����: " << s.score << std::endl;
    std::cout << "������� ������ ������: " << s.rating << std::endl;
    std::cout << " " << std::endl;

}