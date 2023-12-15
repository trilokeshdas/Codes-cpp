#include <iostream>
using namespace std;

class base{
    public:
        int val;
        base(){};
        base(int val){
            this->val=val;
        }

        base set_value(int num){
            val=num;
            return *this;
        }

        void display(){
            cout<<"value of number in the base class is "<< val<<endl;
        }
};

class derived : public base{
    public:
        int val1;
        derived(int a, int b):base(b){
            val1=a;

        }
       derived(){};
       void display(){
            cout<<"value of number in the derived class is "<< val1<<endl;
        }
};

int main(){
    base b1;
    //cout<<"ok\n";
    derived d1(10,11);
    base *point_to_base=&d1;
    point_to_base->display();
    
}