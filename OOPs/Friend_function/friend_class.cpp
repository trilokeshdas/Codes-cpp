#include<iostream>
using namespace std;

class employee
{
    int id;
public: 
    void setid()
    {
        cout<<"enter the id "<<endl;
        cin>>id;
    }
    void getid()
    {
        cout<<"the id of the employee is "<<id<<endl;
    }
    friend class f;
};
class f
{
public: 
      void printid(employee e)
      {
        cout<<"the id of the employee in friend class is "<<e.id<<endl;
      }
};

int main(){
    employee e1,e2;
    f member;
    e1.setid();
    e1.getid();

    e2.setid();
    e2.getid();

    member.printid(e1);
    member.printid(e2);


    return 0;
}