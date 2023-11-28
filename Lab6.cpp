#include<iostream>
using namespace std;

class shape
{
   protected:
    double a;
    double b;
 public:
    void setdata(double a1, double b1)
    {
        a=a1;
        b=b1;
    }
};
class traingle: public shape
{
    public:
    void area(double a1,double b1)
    {
        setdata(a1,b1);
        double ar=0.5*a*b;
        cout<<"the area of triangle is "<<ar<<endl;
    }
};
class rectangle: public shape
{
    public:
    void area(double a1,double b1)
    {
        setdata(a1,b1);
        double ar=a1*b1;
        cout<<"the area of rectangle is "<<ar<<endl;
    }
};

int main(){
    traingle t;
    rectangle r;
    t.area(2,3);
    r.area(4,5);
    return 0;
}