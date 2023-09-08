#include<iostream>
using namespace std;
/*in destructor when the object goes out of scope it is freed by destructor.
destructor works in reverse order. first it deletes elements which are executed at last
1. Destructor is invoked automatically by the compiler when its corresponding constructor goes out of scope and releases the memory space that is no longer required by the program.
2. Destructor neither requires any argument nor returns any value therefore it cannot be overloaded.
3. Destructor  cannot be declared as static and const;
4. Destructor should be declared in the public section of the program.
5. Destructor is called in the reverse order of its constructor invocation
In destructor, objects are destroyed in the reverse of object creation.*/
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