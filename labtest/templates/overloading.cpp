#include<iostream>
using namespace std;


template<typename T>
void func(T a)
{
    cout<<a<<endl;
    cout<<"template func is called"<<endl;
}
void func(int a)
{
    cout<<a<<endl;
}
template<typename T>
void func(T a,T b)
{
    cout<<a<<endl;
    cout<<b<<endl;
}


int main(){
    func(1);
    func(4,5);
    return 0;
}