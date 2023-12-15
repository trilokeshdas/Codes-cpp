#include<iostream>
using namespace std;

class base
{
    public:
    int base_a;
         virtual void display()
        {
            cout<<"the value of a of base class is: "<<base_a<<endl;
        }
};
class derived : public base
{
    public:
     int derived_a;
     void display()
     {
        cout<<"The value of a of base class  is"<<base_a<<endl;
        cout<<"The value of a of derived class  is"<<derived_a<<endl;
     }
};

int main(){
    base *basepoint;
    base ob1;
    derived *derivepoint;
    derived ob2;

    basepoint=&ob2;
    basepoint->base_a=10;
    cout<<"! the value is "<<basepoint->base_a<<endl;
    cout<<"THe value is "<<ob2.base_a<<endl;

    basepoint->display(); 
    /*
    this display function has the same name in both the classes
    upon calling basepoint->display it calls the function of 
    the base class bcoz it is of base data type rather than 
    derived class display as it is pointing to the object of derived class

    this can be overcomed by putting virtual before the  display function
    of the base class so that the display function of the derived class
    can be called above
    */
    derivepoint=&ob2;
    derivepoint->derived_a=20;
    derivepoint->display();

    
    return 0;
}