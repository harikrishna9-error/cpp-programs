#include<iostream>
using namespace std;
class student{
	protected:
		int rollno;
		string name;
		void getstu(){
			cout<<"Enter Rollno and Name :";
			cin>>rollno>>name;   
	    }
		void showstu(){
			cout<<"Name :"<<name<<endl;
			cout<<"Rollno :"<<rollno<<endl;   
		}    
};
class marks:public student{
	protected:
		int m1,m2,m3,m4,m5;
		void getm(){
			getstu();
			cout<<"Enter Five subjects - marks :";
			cin>>m1>>m2>>m3>>m4>>m5;    
		}
};
class percentage:public marks{
	public:
		float percen;
		void showp(){
			getm();
			percen=((float)(m1+m2+m3+m4+m5)/500)*100;
			showstu();
			cout<<"Percentage :"<<percen<<"%";    
		}
};
int main(){
	percentage p;
	p.showp();
	return 0;  
}

