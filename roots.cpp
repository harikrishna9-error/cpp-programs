//Roots of a quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,root1,root2;
	cout<<"enter a,b and c values:";
	cin>>a>>b>>c;
	double D=b*b-4*a*c;
	if(D==0)
	{
		root1=-b/(2*a);
		root2=-b/(2*a);
		cout<<"roots real and equal"<<endl<<"root1="<<root1<<" "<<"root2="<<root2;
	}
	else if(D>0){
	root1=(-b+sqrt(D))/(2*a);
	root2=(-b-sqrt(D))/(2*a);
		cout<<"roots are real and distinct"<<endl<<"root1="<<root1<<" "<<"root2="<<root2;
	}
	else
	{
		cout<<"roots are imaginary";
	}
	return 0;
}

