#include <iostream>
#include <cmath>
using namespace std;

void f(int & a) {
    a *= -1;
}

bool g(int a) {
    if (a != 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a;
    cin >> a;
    f(a);
    cout << g(a) << " " << a;
}