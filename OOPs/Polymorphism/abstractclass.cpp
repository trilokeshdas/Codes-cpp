#include<iostream>
using namespace std;

class publication
{
    protected:
    string name;
  public:
      publication(string n)
      {
        name=n;
      }
    virtual void display()=0;//pure virtual function and thhis is a abstractg class
};

class book:public publication
{
    int pages;
   public:
      book(string n,int p):publication(n)
      {
        pages=p;
      }
      void display()
      {
        cout<<"The publicatin name is "<<name<<endl;
        cout<<"The number of pages of the book are "<<pages<<endl;
      }
};

class tape:public publication
{
    int min;
    public:
        tape(string n, int m):publication(n)
        {
            min=m;
        }
        void display()
        {
        cout<<"The publication name is "<<name<<endl;
        cout<<"The playtime of audio tape is  "<<min<<endl;
        }
};

int main(){
    publication *p;
    book b("trinity",100);
    tape t("hello",57);
    publication & ref=b; //using reference instead of pointers
    p=&b;
    p->display();

    p=&t;
    p->display();

    p->display();//using reference
    return 0;
}