#include<iostream> 
/*
q-4.2. write a c++ program that calculates the factorial of a number using recursion
*/
using namespace std;


long int factorial(int num)
{
	if(num <= 1)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1); 
	}
}

int main()
{
	int num;

	// input number 
	cout << "enter the number of which you want the factorial : ";
	cin >> num;

	// output result
	cout << "the factorial of the number is: " << factorial(num);
}
