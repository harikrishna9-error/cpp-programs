#include <iostream>
using namespace std;
int var = 9;
namespace MyNamespace 
{
    int var = 7;
    void display() 
	{
        cout << "Inside namespace, var = " << var << endl;
    }
}
int main() 
{
    int var = 6;
    cout << "Local variable value = " << var << endl;                
    cout << "Global variable value = " << ::var << endl;            
    cout << "Namespace var = " << MyNamespace::var << endl; 
    MyNamespace::display();
    return 0;
}
