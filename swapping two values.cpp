#include <iostream>
using namespace std;

// Function template
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    double p = 3.5, q = 9.8;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);   // works for int
    cout << "After swapping:  x = " << x << ", y = " << y << endl;

    cout << "\nBefore swapping: p = " << p << ", q = " << q << endl;
    swapValues(p, q);   // works for double
    cout << "After swapping:  p = " << p << ", q = " << q << endl;

    return 0;
}

