#include<iostream>
using namespace std;

//program to use default parameters to templates
template<class T1=int, class T2=float>
class compare
{
    T1 a;
    T2 b;
public:
    compare(T1 a1, T2 b1)
    {
        a=a1;
        b=b1;
    }
    void print()
    {
    cout<<a<<endl;
    cout<<b<<endl;
    }
};


int main(){

    compare <>c(1,5.6);//default paramter used 
    compare <int,float>c1(1,1.254);
    compare<float,char>c2(1.54,'C');
    c.print();
    c1.print();
    c2.print();
    return 0;
}