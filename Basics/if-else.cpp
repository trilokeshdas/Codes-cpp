#include<iostream>
using namespace std;

int main(){
    int age=55;
    if(age>=18 && age<=150)
    {
    cout<<"eligible";
    }
    else if(age>150)
    {
        cout<<"invalid age";
    }
    else
    {
        cout<<"not eligible";
    }
    return 0;
}