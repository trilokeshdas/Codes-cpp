#include<iostream>
using namespace std;

class employee
{
    int id;
public:
      void setdata()
      {
        cout<<"enter the value of id"<<endl;
        cin>>id;
      }
      void getdata()
      {
        cout<<"the value of the id is "<<id<<endl;
      }
      friend void id(employee e);
};
void id(employee e)
{
    cout<<"the value of id in friend function is "<<e.id<<endl;
}
int main(){
    employee e;
    e.setdata();
    e.getdata();
    id(e);
    return 0;
}