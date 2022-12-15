#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите кол-ва элементов массива:\n";
    cin >> n;
    int* mas = new int[n];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    cout << "Индексы нулевых элементов:\n";
    for (int i = 0; i < n; i++) {
        if (mas[i] == 0) {
            cout << i << ", ";
        }
    }
}