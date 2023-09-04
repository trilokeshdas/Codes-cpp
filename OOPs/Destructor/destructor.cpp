#include<iostream>
using namespace std;
/*in destructor when the object goes out of scope it is freed by destructor.
destructor works in reverse order. first it deletes elements which are executed at last*/
class destructor
{
    int number;
public:
      destructor(int num)
      {
        number=num;
        cout<<"Constructor is invoked for object number "<<number<<endl;
      }
      ~destructor()
      {
        cout<<"Destructor is invoked for object number "<<number<<endl;
      }
};
int main(){
    destructor n1(10),n2(20);
    {
        destructor n3(30); //this gets destructed first as it goes out of scope first
    }
    destructor n4(40);
    return 0;
}