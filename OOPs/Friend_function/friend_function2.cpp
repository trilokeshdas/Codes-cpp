#include<iostream>
using namespace std;
/*Global function or the function outside class defination is made as friend function*/
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
      friend complex sumcomplex(complex c1, complex c2);
    
};
void complex :: getnumber()
{
    cout<<"The complex number is "<<rl<<" + "<<im<<"i"<<endl;
}
//this is global friend function
complex sumcomplex(complex c1, complex c2)
{
    complex c3;
    c3.setnumber((c1.rl+c2.rl),(c1.im+c2.im)); //after making the function friend the private members are accessible
    // c3.rl=10;
    // c3.im=20;
    return c3;
}
int main(){
    complex c1, c2, sum;
    c1.setnumber(1,2);
    c2.setnumber(2,3);
    
    c1.getnumber();
    c2.getnumber();

    sum=sumcomplex(c1,c2);
    sum.getnumber();
    return 0;
} 