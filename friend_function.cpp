#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
	public:
		void get()
		{
			x=99;
		}
		friend void sum();
};
void sum()
{
	int y=1;
	Demo d;
	d.get();
	cout<<"sum="<<d.x+y;
}
int main()
{
	sum();
}
