#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		void get()
		{
			cout<<"enter real and imag values:";
			cin>>real>>imag;
		}
		void operator+(complex c2)
		{
			cout<<real+c2.real<<"+"<<imag+c2.imag<<"i";
		}
};
int main()
{
	complex c1,c2;
	c1.get();
	c2.get();
	cout<<"c1+c2=";
	c1+c2;
	return 0;
}

