#include<iostream>
using namespace std;
class Member{
    public:
        string name;
        int age;
        void getM(){
            cout <<"Enter Name and Age: ";
            cin>>name>>age;
        }
        void showM() {
            cout << "Name: " << name << endl;
            cout << "Age : " << age << endl;
        }
};
class Student:public Member{
    public:
        int rollNo;
        string course;
        void getstu(){
            getM();
            cout <<"Enter Roll Number and Course:";
            cin>>rollNo>>course;
        }
        void showstu(){
            showM();
            cout<<"Roll-No: "<<rollNo<<endl;
            cout<<"Course: "<<course<<endl;
        }
};
class Faculty:public Member{
    public:
        int empId;
        string department;
        void getFaculty(){
            getM();
            cout<<"Enter Employee ID and Department: ";
            cin>>empId>>department;
        }
        void showFaculty(){
            showM();
            cout<<"Employee ID: "<<empId<<endl;
            cout<<"Department : "<<department<<endl;
        }
};
int main() {
    Student s;
    Faculty f;
    cout << "Enter Student Details:\n";
    s.getstu();
    cout << "\nEnter Faculty Details:\n";
    f.getFaculty();
    cout << "\nStudent Information:\n";
    s.showstu();
    cout << "\nFaculty Information:\n";
    f.showFaculty();
    return 0;
}


