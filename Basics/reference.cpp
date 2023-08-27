#include<iostream>
using namespace std;
/*A reference variable is an alias, that is, another name for an already 
existing variable. A reference, like a pointer, is also implemented by 
storing the address of an object. */
int main(){
    int a=10;
    int & r=a;//reference
    int *p=&a;//pointer
    cout<<"The value of the variable is "<<a<<endl;
    cout<<"The value of the reference is "<<r<<endl; //it automatically puts the '*' sign before the reference
    cout<<"The address of the reference is "<<&r<<endl;
    cout<<"The address of the variable is "<<&a<<endl;
    cout<<"The address of the variable is "<<p<<endl;
    cout<<"The address of pointer is "<<&p<<endl;
    cout<<"The value of the address stored in p is "<<*p<<endl;

    return 0;
}