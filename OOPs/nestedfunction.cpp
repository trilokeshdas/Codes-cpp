#include<iostream>
using namespace std;

class binary{
    string s;
    //void check(); this is automatically private so can be only 
    //accessed inside another member function of the same class

public:
    void read();
    void check();
    void complement();
    void display();
};
void binary :: read()
{
    cout<<"enter the binary string"<<endl;
    cin>>s;
}
void binary:: check()
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)!='0' &&  s.at(i)!='1')
        {
            cout<<"Invalid binary string";
            exit(0);
        }
    }
}
void binary :: complement()
{
    check(); //this is nesting of member function inside another member function
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}
void binary :: display()
{   
    cout<<"the binary number is "<<endl;
    for(int i=0; i<s.length(); i++)
    {
        cout<<s.at(i); 
    }
    //cout<<s; other way of printing
    cout<<endl;
}

int main(){
    binary b;
    b.read();
    //b.check(); cannot access if private
    b.complement();
    b.display();

    return 0;
}