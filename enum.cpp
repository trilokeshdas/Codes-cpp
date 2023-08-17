#include<iostream>
using namespace std;
/*An enumeration is a data type that consists of a set of named values that
 represent integral constants, known as enumeration constants*/
 /*Enumeration (Enumerated type) is a user-defined data type that can be 
 assigned some limited values. 
 These values are defined by the programmer at the time of declaring the enumerated type.*/
int main(){
    enum meals{breakfast, lunch, dinner};
    cout<<lunch<<endl;// this prints the value assigned to the lunch element 
    // the indexing starts same as array
    meals m1=breakfast; //meals becomes a enum data type
    cout<<m1<<endl;
    enum test{value1=1, value2, value3}; // here we can also define values to each elements
    // and the next element will have the successor of the prev member's value
    cout<<"the value of value2 is "<<value2<<endl;
    enum test1{list1=1, list2=10, list3};
    cout<<"list3 is "<<list3;

    return 0;
}