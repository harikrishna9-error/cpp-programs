#include<iostream>
using namespace std;
int main ()
 { 
int x = 50; 
int y = 0;
 try 
{
if( y == 0 ) 
 throw "Divide by Zero";
 else
cout<< (x/y); 
 }
catch (const char* msg)
 { 
cout <<"Error:"<<msg << endl;
 }
 return 0;
 }

