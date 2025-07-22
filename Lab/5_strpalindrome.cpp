#include <iostream> 
using namespace std;

// write a c++ program to check if a given string is a palindrome 
// (reads the same forwards and backwards)

int main() {
    string str, rev; 

    cout << "Enter a string: ";
    cin >> str; 

    // reverse the string
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    cout << "Rev : " << rev << endl;
    // check  original and reversed strings are  same
    if (str == rev) {
        cout << "Palindrome"; 
    } else {
        cout << "Not Palindrome"; 
    }

    return 0;
}
