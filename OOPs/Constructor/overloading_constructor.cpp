#include<iostream>
using namespace std;
//constructor overloading is the method od using the same constructor name for 
//different purposes by changing the number of parameters of the constructor 
// or changing the data type of the paramters
class complex
{
    int rl;
    int im;
public:
      complex(int x, int y)//2 arguments
      {
        rl=x;
        im=y;
      }
      complex(int a)//only one argument
      {
        rl=a;
        im=0;//any random values
      }
      complex()//no arguments 
      {
        rl=5;
        im=8;
      }

      void display()
      {
        cout<<"the complex number is "<<rl<<" + "<<im<<"i"<<endl;
      }
};
// complex :: complex()
// {
    
//     cout<<"enter the real part"<<endl;
//     cin>>rl;
//     cout<<"enter the imaginary part"<<endl;
//     cin>>im;
// }


int main(){
    complex c1(2,3);//Implicit call
    c1.display();

    complex c2(5);
    c2.display();
    
    complex c3;
    c3.display();

    return 0;
}