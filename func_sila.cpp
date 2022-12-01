#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double sila(double m1,double m2,double r) {
    return 6.67 * pow(10, -11) * m1 * m2 / pow(r, 2);
}

int main() {
    //cout << fixed;
    //cout.precision(5);
    setlocale(LC_ALL, "Russian");
    double m1, m2, m3, r12, r23, r13, F1, F2, F3;
    cout << "Введите массы трёх точек:\n";
    cin >> m1 >> m2 >> m3;
    cout << "Введите расстояния между точками:\n";
    cin >> r12 >> r23 >> r13;
    m1 *= pow(10, 5);
    m2 *= pow(10, 5);
    m3 *= pow(10, 5);
    r12 *= pow(10, 5);
    r23 *= pow(10, 5);
    r13 *= pow(10, 5);
    F1 = sila(m1, m2, r12);
    F2 = sila(m2, m3, r23);
    F3 = sila(m1, m3, r13);
    if (F1 >= F3 && F2 >= F3) {
        cout << F1 << " " << F2;
    }
    else if (F1 >= F2 && F3 >= F2) {
        cout << F1 << " " << F3;
    }
    else if (F2 >= F1 && F3 >= F1) {
        cout << F2 << " " << F3;
    }
    return 0;
}

