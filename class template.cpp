#include <iostream>
using namespace std;

// Class template
template <class T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }
    void add() {
        cout << "Addition = " << num1 + num2 << endl;
    }
    void subtract() {
        cout << "Subtraction = " << num1 - num2 << endl;
    }
    void multiply() {
        cout << "Multiplication = " << num1 * num2 << endl;
    }
    void divide() {
        cout << "Division = " << num1 / num2 << endl;
    }
};

int main() {
    Calculator<int> c1(20, 10);      // int type
    Calculator<double> c2(5.5, 2.2); // double type

    cout << "Using int calculator:" << endl;
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();

    cout << "\nUsing double calculator:" << endl;
    c2.add();
    c2.subtract();
    c2.multiply();
    c2.divide();

    return 0;
}

