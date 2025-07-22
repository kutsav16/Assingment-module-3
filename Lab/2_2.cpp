#include<iostream>
/*
Q-2.2.Write a C++ program that performs both implicit and explicit type conversions 
and prints the results.
*/

using namespace std;
int main()
{
//Implicit type conversion (int -> double)
	int a = 5;
	double b = 2.5,result;
	
	result = a+b;
	cout<<"Implicit type conversion:"<<endl;
	cout<<"a = 5 while b = 2.5"<<endl;
	cout<<"Result = "<<result<<endl<<endl;
	
//Explicit type conversion (double -> int)
	int c = 7;
	double d = 3.5, ex_result;
	
	ex_result = c/d;
	cout<<"Explicit type conversion:"<<endl;
	cout<<"c = 7 while d = 3.5"<<endl;
	cout<<"Result = "<<ex_result;
}