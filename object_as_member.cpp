#include<iostream>
using namespace std;
     class Birth{
public:
    int dd, mm, yy;
    void get_date() {
        cout << "Enter Date of Birth (dd mm yyyy): ";
        cin >> dd >> mm >> yy;
    }
    void show_date() {
        cout << "Date of Birth: " << dd << "-" << mm << "-" << yy << endl;
    }
};
class student{
public:
    char name[20];
    Birth dob; 
    char gender;
    void get_details() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Gender (M/F): ";
        cin >> gender;
        dob.get_date(); 
    }
    void print_details() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        dob.show_date();
    }
};
int main() {
    student s;
    s.get_details();   
    s.print_details(); 
    return 0;
}

