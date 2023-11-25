// ������������ ������ 1
// 2-��-25 ������������� ���������
// 2023-10-28 ver1
// ���������� �������

#include "functions.h"
#include <iostream>
using std::cin, std::cout;

double countIMT(double height, double weight) {
    double imt = weight / (height * height);
    if (imt < 18.5) cout << "������� ����� ����";
    else if (imt >= 18.5 && imt <= 25) cout << "�����";
    else cout << "�������� ����� ����";
    return imt;
}