#include <iostream>
using namespace std;

int main()
{
    int n;
    setlocale(LC_ALL, "Russian");
    cout << "Введите кол-во элементов массива:\n";
    cin >> n;
    int *mas = new int[n];
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    for (int i = n - 1; i > n - 4; i--) {
        mas[i] = -1;
    }
    for (int i = 0; i < n; i++) {
        cout << "mas[" << i << "]=" << mas[i] << "\n";
    }
}