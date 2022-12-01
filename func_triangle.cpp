#include <iostream>
#include <cmath>
using namespace std;

double storona(double s) {
    return sqrt(s * 4 / sqrt(3));
}

double gip(double k) {
    return sqrt(2 * k * k);
}

int main() {
    setlocale(LC_ALL, "Russian");
    double s, a, g;
    cout << "Введите площадь р/с треугольника:\n";
    cin >> s;
    a = storona(s);
    g = gip(a);
    cout << "Периметр прямоуг. треуг. равен: " << 2 * a + g;
}