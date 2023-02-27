#include <iostream>
using namespace std;

int fra(int n, int x) {
    if (n > x)
        return 0;
    else if (n == x)
        return 1;
    else if (n < x)
        return fra(n + 3, x) + fra(n + 5, x);
}

int main() {
    int x, n = 0;
    cin >> x;
    cout << fra(n, x);
}