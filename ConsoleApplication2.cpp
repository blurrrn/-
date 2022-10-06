#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, p, s;
    cout << "Введите стороны треугольника" << "\n";
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Площадь треугольника равна " << s;
}
