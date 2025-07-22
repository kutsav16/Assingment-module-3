//o Write a C++ program that defines a class Calculator with functions for addition,
//subtraction, multiplication, and division. Create objects to use these functions.
//o Objective: Introduce basic classstructure

 #include<iostream>
 using namespace std;
 
 class cal
 {
 	
 	public:
 	
 	int add(int a, int b)
 	{
 	   return a+b;	
	}
	int sub(int a, int b)
	{
		return a-b;
		
	}
	int mul(int a ,int b)
	{
		return a*b;
		
	}
	double div(int a,int b)
	{
		return (float)a/(float)b;
	}

};
int main()
{
	cal c;
	int a,b;
	
	cout<<"ENTER  A AND B =";
	cin>>a>>b;
	
	cout<<"ADDITION : "<<c.add(a,b)<<endl;
	cout<<"SUBTRACTION : "<<c.sub(a,b)<<endl;
	cout<<"MULTIPLICATION : "<<c.mul(a,b)<<endl;
    cout<<"DIVISION : "<<c.div(a,b)<<endl;
	
	return 0;	
	
}