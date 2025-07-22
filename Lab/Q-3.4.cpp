#include<iostream> // header for input/output operations
using namespace std;

/*
q-3.4. write a program that prints a right-angled triangle using stars(*) with a nested loop.
*/

int main()
{
    int row, i, j;

    //rows for the triangle
    cout << "enter the number of rows: ";
    cin >> row;

    
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
