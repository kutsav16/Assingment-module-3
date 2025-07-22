#include<iostream>
using namespace std;

/* Write a C++ program to perform matrix addition on two 2x2 matrices.
   Objective: Practice multi-dimensional arrays. */

int main()
{
    int row, col;

    // get number of rows and columns 
    cout << "Enter number of row : ";
    cin >> row;
    cout << "Enter number of col : ";
    cin >> col;

    
    int a[row][col], b[row][col], ans[row][col];
    int i, j;

    // input elements in matrix a
    cout << "Enter value in a array : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter element in a[" << i << "] [" << j << "] : ";
            cin >> a[i][j];
        }
    }

    // input elements in matrix b
    cout << "Enter value in b array : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter element in b[" << i << "] [" << j << "] : ";
            cin >> b[i][j];
        }
    }

    // display matrix a
    cout << "Array a : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // display matrix b
    cout << "Array b : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    // sum of matrices a and b
    cout << "Addition of array a and b : " << endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            ans[i][j] = a[i][j] + b[i][j]; 
            cout << ans[i][j] << "\t";    
        }
        cout << endl;
    }

}
