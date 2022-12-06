#include <iostream>
using namespace std;
typedef long long l;
double eps = 1e-9;

double binpow(double x, l n) {
    double ans = 1;
    while (n) {
        if (n & 1) {
            ans *= x;
            --n;
        }
        else {
            x *= x;
            n >>= 1;
        }
    }
    return ans;
}
void fast_factor(l& n) {
    for (l i = n + 1; i <= 2 * n; i++) {
        n *= i;
    }
}
int main() {
    double curr, x;
    l n = 1, k = 1;
    for (int i = n; i < 10; i++) {
        fast_factor(n);
        cout << 2 * k << " " << n << " ";
        n *= 2;
        k++;
    }
}