#include <iostream> 
using namespace std; 
  
class Person { 
    int id; 
    char name[100]; 
  
public: 
    void set_p() 
    { 
        cout << "Enter the Id:"; 
        cin >> id; 
        cout << "Enter the Name:"; 
        cin >> name; 
    } 
  
    void display_p() 
    { 
        cout << endl <<"Id: "<< id << "\nName: " << name <<endl; 
    } 
}; 
  
class Student : private Person { 
    char course[50]; 
    int fee; 
  
public: 
    void set_s() 
    { 
        set_p(); 
        cout << "Enter the Course Name:"; 
        cin >> course; 
        cout << "Enter the Course Fee:"; 
        cin >> fee; 
    }
  
    void display_s() 
    { 
        //cout<<"Id: "<<id<<endl; this will throw error as id is a private data member of the base class
        display_p();// id can be used in the member function of its base class
        cout <<"Course: "<< course << "\nFee: " << fee << endl; 
    } 
}; 
  
int main() 
{ 
    Student s; 
    s.set_s(); 
    s.display_s(); 
    return 0; 
}