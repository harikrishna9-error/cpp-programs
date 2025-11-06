#include <iostream>
using namespace std;
class Demo {
	public:
		Demo() 
		{
			cout << "Constructor called" << endl;
        }
        ~Demo() 
	    {
	   	    cout << "Destructor called" << endl;
        }
        void show() 
	    {
    	    cout << "Hello from anonymous object!" << endl;
        }
};
int main() 
{
    // Anonymous object created and used immediately
    Demo().show();
    // Another anonymous object (not used)
    Demo();
    return 0;
}

