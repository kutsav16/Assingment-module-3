#include<iostream> 
using namespace std;

/*
q-3.1. write a c++ program that takes a student's marks as input and calculates the 
grade based on if-else conditions.
*/

int main()
{
    float physics, chemistry, math, english; 
    char grade;

    // input marks of subject
    cout << "enter your marks in physics out of 100: ";
    cin >> physics;
    
    cout << "enter your marks in chemistry out of 100: ";
    cin >> chemistry;
    
    cout << "enter your marks in mathematics out of 100: ";
    cin >> math;
    
    cout << "enter your marks in english out of 100: ";
    cin >> english;

    // total and percentage
    float total = physics + chemistry + math + english;
    float percentage = total / 4;

    // display percentage
    cout << "your overall percentage is: " << percentage << "%" << endl;

    if (percentage >= 85)
    {
        grade = 'a';
    }
    else if (percentage >= 65 && percentage < 85)
    {
        grade = 'b';
    }
    else
    {
        grade = 'c';
    }

    // display grade
    cout << "your grade is: " << grade << endl;

    return 0;
}
