#include<iostream>
using namespace std;


class classroom
{
    int id[100];
    int marks[100];
    int counter=0;
public:
    void input();
    void display();
};

void classroom :: input()
{
    
    for(int i=0; i<100; i++)
    {
        int x;
        cout<<"enter the student id"<<endl;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        else{
            id[i]=x;
        }

        cout<<"enter marks of id "<<id[i]<<endl;
        cin>>marks[i];
        counter ++;
    }
    
}
void classroom :: display()
{
    for(int i=0; i<counter ; i++)
    {
        cout<<"the marks of the id "<<id[i]<<"is "<<marks[i]<<endl;
    }
    cout<<endl;
}

int main(){
    classroom c1,c2;
    c1.input();
    c1.display();
    c2.input();
    c2.display();
    return 0;
}