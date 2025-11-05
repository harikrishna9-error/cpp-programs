#include<iostream>
using namespace std;
class A
{
	public:
		void showA()  {
			cout<<"showA() of class A"<<endl;
		}
};
class B:virtual public A   {
	public:
		void showB()
		{
			cout<<"showB() of class B"<<endl;
		}		};
class C:virtual public A
{
	public:
		void showC()
		{
			cout<<"showC() of class C"<<endl;
		}		};
class D:public B,public C
{
	public:
		void showD(){
			cout<<"showD() of class D"<<endl;  
	    }		
};
int main()
{
	D d;
	d.showD();
	d.showC();
	d.showB();
	d.showA();
}

