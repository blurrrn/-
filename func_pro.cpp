#include <iostream>
#include <cmath>
using namespace std;

double pro(double a, double b) {
    return a*b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b;
    cout << "Введите два аргумента:\n";
    cin >> a >> b;
    cout << "Результат работы функции: " << pro(a,b);
}

