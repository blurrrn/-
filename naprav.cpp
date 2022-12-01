#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cin >> n;
    switch (n) {
    case 1:
        cout << "Влево (Горизонтально)";
        break;
    case 2:
        cout << "Вверх (Вертикально)";
        break;
    case 3:
        cout << "Вправо (Горизонтально)";
        break;
    case 4:
        cout << "Вниз (Вертикально)";
        break;
    }
}