// inheritance example
// write a program that implements inheritance using a base class person and derived
// classes student and teacher. demonstrate reusability through inheritance.
// objective: learn the concept of inheritance.

#include<iostream> 
using namespace std;


class person
{
    public:
        string name;
        int age;

        
        void pdetails()
        {
            cout << "enter the name: ";
            cin >> name;

            cout << "enter the age: ";
            cin >> age;
        }

        // display person details
        void display()
        {
            cout << "name is: " << name << endl;
            cout << "age is: " << age << endl;
        }
};


class student : public person
{
    public:
        string course;

        
        void sdetails()
        {
            pdetails(); 
            cout << "enter the course: ";
            cin >> course;
        }

        // display student details
        void sdisplay()
        {
            display(); 
            cout << "course name: " << course << endl;
        }
};


class teacher : public person
{
    public:
        string subject;

        
        void tdetails()
        {
            pdetails(); 
            cout << "enter the subject name: ";
            cin >> subject;
        }

        // display teacher details
        void tdisplay()
        {
            display(); 
            cout << "subject: " << subject << endl;
        }
};

int main()
{
    student s;
    teacher t;

    // input and display student and teacher data
    cout << "enter the details of student" << endl << endl;
    s.sdetails();

    cout << "*" << endl << endl;

    cout << "enter the details of teacher" << endl << endl;
    t.tdetails();

    cout << "*" << endl << endl;

    cout << "information of student" << endl << endl;
    s.sdisplay();

    cout << "*" << endl << endl;

    cout << "information of teacher" << endl << endl;
    t.tdisplay();

    cout << "*" << endl << endl;

    return 0;
}
