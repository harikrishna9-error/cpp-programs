#include<iostream>
using namespace std;
class complex
{
	private:
		int real,imag;
		public:
			void get()
			{
				cout<<"enter real and imaginary values:";
				cin>>real>>imag;
			}
			void show()
			{
				cout<<real<<"+"<<imag<<"i"<<endl;
			}
			void add(complex c2)
			{
				cout<<real+c2.real<<"+"<<imag+c2.imag<<"i";
			}
			
};
int main()
{
	complex c1,c2;
	c1.get();
	c2.get();
	cout<<"c1=";
	c1.show();
	cout<<"c2=";
	c2.show();
	cout<<"c1+c2=";
	c1.add(c2);
}
