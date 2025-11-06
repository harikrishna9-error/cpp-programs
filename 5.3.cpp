#include <iostream>
#include <list>
using namespace std;
int main()
{
   list<int> L;
   for(int i=1;i<=5;i++)
   {
   L.push_back(i);              // Insert a new element at the end
   L.push_front(i*5); 
   }            // Insert a new element at the beginning
   L.insert(++L.begin(),2);     // Insert "2" after first node
  list<int>::iterator i;
   for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
   cout << endl;
   cout<<"After DELETION elements in list"<<endl;
   L.pop_front();
   L.pop_back();
   for(i=L.begin(); i != L.end(); ++i) cout << *i << " ";
   cout << endl;
   return 0;
}

