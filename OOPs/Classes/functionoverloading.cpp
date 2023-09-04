#include<iostream>
using namespace std;
/*In function overloading functions with same name can be used but it differentiates
 by knowing the number of arguments passed in each function.
It is a feature of object oriented programming
if the parameters are also same then the data type of parameters mujst be different*/

int volume(int a);
int volume(int r, int h);
int volume(int l, int b, int h);
int main(){
    int a=3;
    int r=3,h=6;
    int l=3,b=7,d=6;
    cout<<"the volume of cube is "<<volume(a)<<endl;
    cout<<"the volume of cylinder is "<<volume(r,h)<<endl;
    cout<<"the volume of cuboid is "<<volume(l,b,d)<<endl;
    return 0;
}
//Calculation of volume of cube
int volume(int a){
    return a*a*a;
}
//calculation of volume of cylinder
int volume(int r, int h){
    return (3.14)*r*r*h;
}
//calculation of volume of cuboid
int volume(int l, int b, int d){
    return l*b*d;
}