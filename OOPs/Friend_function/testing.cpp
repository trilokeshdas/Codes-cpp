#include<iostream>
using namespace std;
/*member function of another class is made as friend function*/
class complex;
/*declaration of the member function of another class*/
class sum
{
public:
      complex sumcomplex(complex c1, complex c2);
};
//defination of base class
class complex
{
    int rl;
    int im;
public:
      void setnumber(int a, int b)
      {
        rl=a;
        im=b;
      }
      void getnumber();
      friend class sum; /*making the member function of another class as friend*/
    
};
void complex :: getnumber()
{
    cout<<"The complex number is "<<rl<<" + "<<im<<"i"<<endl;
}
/*defination of member function of sum class*/
complex sum :: sumcomplex(complex c1, complex c2)
{
   complex c3;
   c3.setnumber((c1.rl+c2.rl),(c1.im+c2.im));
   return c3;
}
int main(){
    complex c1, c2,res;
    sum s;
    c1.setnumber(1,2);
    c2.setnumber(2,3);
    
    c1.getnumber();
    c2.getnumber();

    res=s.sumcomplex(c1,c2);
    res.getnumber();

    return 0;
} 