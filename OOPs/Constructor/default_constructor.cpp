#include<iostream>
using namespace std;

class complex
{
    int rl;
    int im;
public:
      complex()
      {
        cout<<"enter the real part"<<endl;
        cin>>rl;
        cout<<"enter the imaginary part"<<endl;
        cin>>im;
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
    complex c1,c2;
    c1.display();
    c2.display();
    return 0;
}