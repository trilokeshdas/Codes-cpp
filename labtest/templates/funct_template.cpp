#include<iostream>
using namespace std;

template<typename T>
void swapp(T &a, T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10; 
    int y=20;
    swapp<int>(x,y);
    cout<<x<<endl;
    cout<<y;
    return 0;
}