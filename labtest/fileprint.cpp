#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("file2.txt");
    string st2;
    out<<"My name is trilokesh das"<<endl;
    out<<"I love C++"<<endl;
    //out<<"my name is trilokesh";
    out.close();
    ifstream in("file2.txt");
    // in>>st2;
    //other way to print all contents
    // while(in.eof()==0)
    // {
    //     getline(in,st2);
    //     cout<<st2<<endl;
    // }
    while(getline(in,st2))
    {
    cout<<st2<<endl;
    }
    
    in.close();

    return 0;
}