#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите кол-во элементов массива:\n";
    cin >> n;
    int *mas = new int[n];
    mas[0] = 0;
    mas[1] = 1;
    for (int i = 2; i < n; i ++ ) {
        mas[i] = mas[i - 1] + mas[i - 2];
    }
    for (int i = n-1; i > -1; i--) {
        cout << mas[i] << "\n";
    }
}