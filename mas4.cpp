#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, m, k;
    cout << "Введите кол-во строк и столбцов таблицы:\n";
    cin >> n >> m;
    int** mas = new int* [n];
    for (int i = 0; i < n; ++i) {
        mas[i] = new int[m];
    }
    cout << "Введите элементы таблицы:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mas[i][j];
        }
    }
    k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mas[i][j] < 0) {
                k += 1;
            }
        }
    }
    cout << "Кол-во отрицательных элементов таблицы:\n" << k;

}