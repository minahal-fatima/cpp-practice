#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 2;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << b;
}