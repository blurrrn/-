#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, x;
    cout << "Введите значение x:\n";
    cin >> x;
    a = pow(cosh(x), -7) - (log10(2 * x)) / log10(7.0 / 8.0);
    cout << "Итоговое значение:\n" << a;
}