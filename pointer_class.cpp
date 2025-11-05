#include<iostream>
using namespace std;
class base{
	public:
		void show()
		{
			cout<<"Show() of base class"<<endl;
		}
};
class derived : public base{
	public:
		void print()
		{
			cout<<"Print() of derived class"<<endl;
		}
};
int main()
{
	derived d,*dptr;
	dptr=&d;
	dptr->print();
	dptr->show();
}

