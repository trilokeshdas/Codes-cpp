#include<iostream>
#include<string>
using namespace std;

int main(){
    string name="helloworld";
    cout<<"the string is "<<name<<endl;
    cout<<"the length of the string is "<<name.length()<<endl;
    cout<<"the substring is "<<name.substr(1,3)<<endl;
    cout<<"the substring is "<<name.substr(0,5)<<endl;
    cout<<"the substring is "<<name.substr(8,2)<<endl;
    //POINTER PART
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr;
    //here substr(a,b) means the charcter starts from a and prints b number of characters
}