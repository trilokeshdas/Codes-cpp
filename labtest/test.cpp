#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream out("abc.txt");
    if(!out.is_open())
    {
        cout<<"error"<<endl;
    }
    return 0;
}