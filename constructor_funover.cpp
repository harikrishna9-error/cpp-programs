#include <iostream>
using namespace std;
class Rectangle 
{
private:
    int length, breadth;
public:
    Rectangle() 
	{
        length = 0;
        breadth = 0;
    }
    Rectangle(int l) 
	{
        length = l;
        breadth = l;  
    }
    Rectangle(int l, int b) 
	{
        length = l;
        breadth = b;
    }
    void displayArea() 
	{
        cout << "Area: " << length * breadth << endl;
    }
};
int main() 
{
    Rectangle r1;           
    Rectangle r2(10);       
    Rectangle r3(3, 9);    
    cout << "Rectangle r1: ";
    r1.displayArea();
    cout << "Rectangle r2: ";
    r2.displayArea();
    cout << "Rectangle r3: ";
    r3.displayArea();
    return 0;
}


