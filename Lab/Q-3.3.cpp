#include<iostream>
using namespace std;

/*
q-3.3. write a c++ program to display the multiplication table of a given number using a for loop.
*/

int main()
{
    int num, mul;

    // number of table is needed
    cout << "enter the number you want the table of: ";
    cin >> num;

    // length of the table
    cout << "enter how many multiples you want: ";
    cin >> mul;

    // multiplication table
    for (int i = 1; i <= mul; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
