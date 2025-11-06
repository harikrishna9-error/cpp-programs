#include<iostream>
using namespace std;
class student{
	protected:
		int rollno;
		string name;		
		void getstu()
		{
			cout<<"Enter Rollno and name of the student :";
			cin>>rollno>>name;
		}
		void showstu()
		{
			cout<<"Name :"<<name<<endl<<"Roll-no :"<<rollno<<endl;
		}
};
class marks:public student{
	protected:
		int m1,m2,m3,m4,m5;
		void getm()
		{
			getstu();
			cout<<"Enter five subjects marks :";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
};
class SABL{
	protected:
		int tech;
		int non_tech;
		void getp()
		{
			cout<<"Enter Marks obtained for techincal and non-technical events in SABL :";
			cin>>tech>>non_tech;
		}
};
class percentage:public marks ,public SABL{
	public:
	    float per;
		void cal_percentage()
		{
		   getm();
		   getp();
		  per =((float)(m1 + m2 + m3 + m4 + m5 + tech + non_tech) / 600) * 100;
		   showstu();
		   cout<<"Percentage :"<<per<<endl;	
		}	
};
int main()
{
	percentage p;
	p.cal_percentage();	
	return 0;
}

