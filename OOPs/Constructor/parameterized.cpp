#include<iostream>
using namespace std;

class complex
{
    int rl;
    int im;
public:
      complex(int x, int y)
      {
        rl=x;
        im=y;
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
    complex c2=complex(4,5);
    c2.display();
    
    
    return 0;
}