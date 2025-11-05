#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Base class contructor is invoked."<<endl;
		}
		virtual ~Base()
		{
		    cout<<"Base class destructor is invoked."<<endl;	
	    }
};
class Derived:public Base
{
	public:
		Derived()
		{
			cout<<"Derived class constructor is invoked."<<endl;
		}
		~Derived()
		{
			cout<<"Derived class destructor is invoked."<<endl;
		}
};
int main()
{
	Base *bptr;
	Derived d;
	bptr=&d;
	delete bptr;
}
