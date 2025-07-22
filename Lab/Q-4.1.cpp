#include<iostream> 
using namespace std;

/*
q-4.1. write a c++ program that defines functions for basic arithmetic operations 
(add, subtract, multiply, divide). the main function should call these based on user input.
*/


int add(int num1, int num2)
{
	return num1 + num2;
}

int subtract(int num1, int num2)
{
	return num1 - num2;
}

int multiply(int num1, int num2)
{
	return num1 * num2;
}

int divide(int num1, int num2)
{
	return num1 / num2;
}

int main()
{
	int num1, num2, choice;

	// input two numbers 
	cout << "enter first number : ";
	cin >> num1;
	cout << "enter second number : ";
	cin >> num2;

	// show menu 
	cout << "what do you want to perform?" << endl;
	cout << "1.addition" << endl;
	cout << "2.subtraction" << endl;
	cout << "3.multiplication" << endl;
	cout << "4.division" << endl;
	cout << "enter (1,2,3,4) = ";
	cin >> choice;

	// switch-case 
	switch(choice)
	{
		case 1:
			cout << "the addition is : " << add(num1, num2);
			break;
		case 2:
			cout << "the subtraction is : " << subtract(num1, num2);
			break;
		case 3:
			cout << "the multiplication is : " << multiply(num1, num2);
			break;
		case 4:
			cout << "the division is : " << divide(num1, num2);
			break;
	}
}
