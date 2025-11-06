#include<iostream>
using namespace std;
template <class T>
class sample {
private:
    T x;
public:
    void get() {
        cout<<"Enter a value: ";
        cin>>x;  }
    void show(){
        cout<<"x = "<<x<<endl; }};
int main() {
    sample<char> s1;
    s1.get();
    s1.show();
    sample<int> s2;
    s2.get();
    s2.show();
    sample<float> s3;
    s3.get();
    s3.show();
    return 0;}

