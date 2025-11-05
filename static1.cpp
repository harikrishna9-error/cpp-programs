//write a cpp program to count no.of objects created for an class.
#include<iostream>
using namespace std;
class sample
{
	public:
		static int count;
		sample()
		{
			count++;
			cout<<"count="<<count<<endl;
		}
};
int sample::count;
int main()
{
	sample s1,s2,s3;
	cout<<sample::count;
}
