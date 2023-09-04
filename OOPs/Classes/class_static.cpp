#include<iostream>
using namespace std;
/*here the value of count will continue for differnet objects of same class
until the termination of the program*/
class employee
{
    int marks;
    static int count;// here the value of static variable is by default 0
                     // here we cannot initialise value on our own
public:
    void input();
    void display();
    //void getcount();
    static void getcount()
    {
        cout<<"The value of count is "<<count<<endl; //static function scope only inside class defination
       // cout<<marks cannot bcoz it is not a static member
    }
};
int employee :: count;//here we can initialise to any value but by default it is 0 
void employee :: input()
{
    cout<<"enter the marks "<<endl;
    cin>>marks;
    count++;
}
void employee :: display()
{
    cout<<"the marks of the employee "<<count<<" is "<<marks<<endl;
}
// void employee :: getcount()
// {
//     cout<<"the value of count is "<<count<<endl;
// }


int main(){
    employee e1,e2,e3;
    e1.input();
    e1.display();
    //e1.getcount();
    employee :: getcount(); //independent of class objects

    e2.input();
    e2.display();
    //e2.getcount();
    employee :: getcount();

    e3.input();
    e3.display();
    //e3.getcount();
    employee :: getcount();
    return 0;
}