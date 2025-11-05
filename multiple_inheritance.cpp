#include<iostream>
using namespace std;
class Area{
	protected:
	void calc_area(int l,int b){
		cout<<"Area of rectangle is:"<<l*b<<endl;
	}
};
class perimeter{
	protected:
		void calc_peri(int l,int b){
			cout<<"The perimeter is :"<<2*(l+b)<<endl;
		}
};
class rectangle:public Area,public perimeter{
	public:
		int l,b;
		void result(){
			cout<<"Enter length and breadth :";
			cin>>l>>b;
			calc_area(l,b);
			calc_peri(l,b);
		}
};
int main(){
	rectangle r;
	r.result();
	return 0;
}

