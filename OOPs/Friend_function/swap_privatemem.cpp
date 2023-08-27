#include<iostream>
using namespace std;
class Y;/*Declaring first bcoz class Y is not known in class X so in order to use 
arguments as Y in X we have to declare it initially*/
class X
{
    int data1;
public:
      void setnum(int num)
      {
        data1=num;
      }
      void getnum()
      {
        cout<<"First number before swapping is "<<data1<<endl;
      }
      friend void swap(X ob1, Y ob2);
};

class Y
{
    int data2;
public:
      void setnum(int num)
      {
        data2=num;
      }
      void getnum()
      {
        cout<<"Second number before swapping is  "<<data2<<endl;
      }
    friend void swap(X ob1, Y ob2);
};

void swap(X ob1, Y ob2)
{
    int temp=ob1.data1;
    ob1.data1=ob2.data2;
    ob2.data2=temp;
    cout<<"The value of data of ob1 after swapping is: "<<ob1.data1<<endl;
    cout<<"The value of data of ob2 after swapping is: "<<ob2.data2<<endl;
}
int main(){
    X ob1; Y ob2;
    ob1.setnum(1);
    ob1.getnum();

    ob2.setnum(2);
    ob2.getnum();

    swap(ob1,ob2);
    return 0;
}