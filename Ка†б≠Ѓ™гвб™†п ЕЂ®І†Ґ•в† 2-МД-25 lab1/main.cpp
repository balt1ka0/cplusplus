// ������������ ������ 1
// 2-��-25 ������������� ���������
// 2023-10-28 ver1
#include <iostream>
#include "functions.h"

using std::cin, std::cout;


int main(int argc, char* argv[]) {
    std::setlocale(LC_ALL, "ru");

    cout << "2-��-25 ������������� ���������, ��������� ������� ��������� ������� � ������� ������ ����� ���� �� ���� � �� � ����� � ������\n";
    double weight, height;
    cout << "���������� ���������� " << argc << '\n';
    for (int i = 0; i < argc; ++i) {
        cout << argv[i] << '\n';
    }
    cout << "������� ����� ���� (� ��): ";
    cin >> weight;
    cout << "������� ���� (� �): ";
    cin >> height;
    countIMT(height, weight);
    return 0;
}
