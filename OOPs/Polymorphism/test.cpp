#include<iostream>
using namespace std;

class base
{
    public:
    int a;
    void display()
    {
        cout<<"The value is "<<a<<endl;
    }
};
int main(){
    base *b;
    b->a=10;
    b->display();
    return 0;
}