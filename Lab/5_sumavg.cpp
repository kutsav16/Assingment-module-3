// Write a C++ program that accepts an array of integers, calculates the sum and 
// average, and displays the results. 
// Objective: Understand basic array manipulation. 

#include<iostream> 
using namespace std;

int main()
{
    int size, i;

    // take size of array 
    cout << "Enter your array size : ";
    cin >> size;

    int a[size]; 

    //  input elements in array
    for (i = 0; i < size; i++)
    {
        cout << "Enter element in a[" << i << "] : ";
        cin >> a[i];
    }

    // display array elements
    cout << "Array a : ";
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    // sum of array elements
    cout << "Sum :";
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;

    // average of array elements
    float avg;
    avg = (float)sum / size;
    cout << "Avg :" << avg;

}
