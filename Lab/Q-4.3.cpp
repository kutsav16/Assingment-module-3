#include<iostream>
using namespace std;

int num = 100; // Global variable

void showScope() {
    int num = 50; // Local variable with same name
    cout << "Inside function (local num): " << num << endl;
}

int main() {
    cout << "In main (global num): " << num << endl;
    showScope();
    cout << "Back in main (global num again): " << num << endl;
}
