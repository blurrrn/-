#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	double PI = 3.141592653589793;
	double PI_2 = acos(-1.0);
	cout << fixed << setprecision(15);
	cout << "Значение Пи:\n" << "Пи (библиотека) " << M_PI << "\n" << "Пи " << PI << "\n" << "Пи(acos)" << PI_2;
}



