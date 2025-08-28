#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* p = &x;

    cout << "x = " << x << '\n';
    cout << "&x = " << &x << '\n';
    cout << "p = " << p << '\n';
    cout << "*p = " << *p << '\n';

    // TODO: modify *p and reprint
    *p = 100;

    cout << "x = " << x << '\n';
    cout << "&x = " << &x << '\n';
    cout << "p = " << p << '\n';
    cout << "*p = " << *p << '\n';

    return 0;
}
