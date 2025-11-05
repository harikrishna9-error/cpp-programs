#include<iostream>
using namespace std;
class Base {
	public:
		virtual void show() {
        cout<<"show() of the base class"<<endl;
    }
};
class Derived:public Base {
	public:
		void show(){
        cout<<"show() of the derived class"<<endl;
    }
};
int main() {
    Base b, *bptr;
    Derived d;
    bptr = &b;
    bptr->show();  
    bptr = &d;  
    bptr->show(); 
    return 0;
}

