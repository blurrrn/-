#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, t;
    cout << "Введите кол-во строк и столбцов таблицы:\n";
    cin >> n;
    int** mas = new int* [n];
    for (int i = 0; i < n; ++i) {
        mas[i] = new int[n];
    }
    cout << "Введите элементы таблицы:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mas[i][j];
        }
    }
    cout << "Исходная таблица:\n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j) {
            cout << mas[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        t = mas[i][i];
        mas[i][i] = mas[n - 1 - i][i];
        mas[n-1-i][i] = t;
    }
    cout << "Конечная таблица:\n";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j) {
            cout << mas[i][j] << " ";
        }
        cout << "\n";
    }
}