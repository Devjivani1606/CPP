//This program is prepared by 24ce043_Dev

#include<iostream>
using namespace std;

class Student
{
    int roll_no;
    double marks[3];
    string name;

public:
    Student(): roll_no(0),name("Default name"),marks{100,100,100}
    {
        cout<<"Saving default student details.."<<endl;
    }

    Student(int r,string n, double m[])
    {
        roll_no = r;
        name = n;
        marks[0]=m[0];
        marks[1]=m[1];
        marks[2]=m[2];
    }

    double calculateAverage()
    {
        return (marks[0]+marks[1]+marks[2])/3;
    }

    void displayDetails()
    {
        cout<<"\nStudent Details::"<<endl;
        cout<<"Roll No.::"<<roll_no<<endl;
        cout<<"Name ::"<<name<<endl;
        cout<<"Average marks ::"<<calculateAverage()<<endl;
    }
};



int main()
{
    Student defalutStudent;
    cout<<"Displaying the default student details::"<<endl;
    defalutStudent.displayDetails();

    int r;
    string n;
    double m[3];

    cout<<"Enter roll number: ";
    cin>>r;
    cout<<"Enter the name: ";
    cin.ignore();
    getline(cin,n);
    cout<<"Enter the marks of three subject: ";
    cin>>m[0]>>m[1]>>m[2];

    Student specificStudent(r,n,m);
    cout<<"Displaying the specific student details::"<<endl;
    specificStudent.displayDetails();

    cout<<"\n24CE043_Dev\n";

    return 0;
}
