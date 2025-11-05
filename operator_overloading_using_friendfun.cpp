#include<iostream>
using namespace std;
class unary
{
	int x,y,z;
	public:
		void get()
		{
			x=20;
			y=-13;
			z=98;
		}
		void show()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
			cout<<"z="<<z<<endl;
		}
		friend void operator-();
};
void operator-()
{
	unary u;
	u.get();
	
	u.x=u.x;
	u.y=u.y;
	u.z=-u.z;
	u.show();
}
int main()
{
	operator-();
	
	return 0;
}
