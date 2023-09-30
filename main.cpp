#include <iostream>
using std::cin;
using std::cout;


double countIMT(double height, double weight) {
    double imt = weight / (height * height);
    if (imt < 18.5) cout << "Дефицит массы тела";
    else if (imt >= 18.5 && imt <= 25) cout << "Норма";
    else cout << "Профицит массы тела";
    return imt; 
}

int main(int argc, char *argv[]) {
    double weight;
    double height;
    cout << "Количество аргументов" << argc << '\n';
    for (int i = 0; i < argc; ++i) {
        cout << argv [i] << '\n';
    }
    cout << "Введите массу тела {в кг}: ";
    cin >> weight;
    cout << "Введите рост (в м): ";
    cin >> height;
    countIMT (height, weight);
    return 0;
}
