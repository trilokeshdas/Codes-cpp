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
        cout<<"First number is "<<data1<<endl;
      }
      friend void addnum(X ob1, Y ob2);
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
        cout<<"Second number is "<<data2<<endl;
      }
    friend void addnum(X ob1, Y ob2);
};

void addnum(X ob1, Y ob2)
{
    cout<<"The sum of 2 numbers is "<<(ob1.data1+ob2.data2)<<endl;
}

int main(){
    X o1;
    Y o2;
    o1.setnum(1);
    o1.getnum();

    o2.setnum(2);
    o2.getnum();

    addnum(o1,o2);
    return 0;
}