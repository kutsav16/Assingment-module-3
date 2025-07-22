// q-2(3): c++ program to show arithmetic, relational, logical, and bitwise operators

#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 5;

    // arithmetic
    cout << "add: " << a + b << endl;
    cout << "sub: " << a - b << endl;
    cout << "mul: " << a * b << endl;
    cout << "div: " << a / b << endl;

    // relational
    cout << "\nrelational:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // logical
    bool x = true, y = false;
    cout << "\nlogic:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;

    // bitwise
    a = 10;
    b = 5;
    cout << "\nbitwise:" << endl;
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "a << 1: " << (a << 1) << endl;
    cout << "a >> 1: " << (a >> 1) << endl;

    return 0;
}
