#include<iostream>
using namespace std;

class number
{
    int num;
public:
      number(){};// else it will throw an error if no parameters are passed
      number(int data);
      number(number & ob1)
      {
        num=ob1.num;
      }
      void display()
      {
        cout<<"The value of number is "<<num<<endl;
      }
};
number :: number(int data)
{
    num=data;
}
int main(){
    number n1(10),n2(n1);//copy constructor is used to replicate another object
    n1.display();
    n2.display();
    number n3=n1;//here also copy constructor is invoked
    n3.display();

    return 0;
}