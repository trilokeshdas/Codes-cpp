#include<iostream>
using namespace std;

class complex
{
    int rl;//real part
    int im; // imaginary part
public:
      void setdata()
      {
        cout<<"Enter the real part "<<endl;
        cin>>rl;
        cout<<"enter the imaginary part"<<endl;
        cin>>im;
      }
     void getdata()
     {
        cout<<"the complex number is "<<rl<<" + "<<im<<"i"<<endl;
     }

     void complexsum(complex ob1, complex ob2)
     {
        rl=ob1.rl + ob2.rl;
        im=ob1.im + ob2.im;
     }
};


int main(){
    complex c1,c2,c3;
    c1.setdata();
    c1.getdata();

    c2.setdata();
    c2.getdata();

    c3.complexsum(c1,c2);
    c3.getdata();

    return 0;
}