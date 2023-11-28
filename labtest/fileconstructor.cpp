#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="trilokesh";
    ofstream out("file1.txt");
    string st2;
    out<<st;
    //out<<"my name is trilokesh";
    out.close();
    ifstream in("file1.txt");
    // in>>st2;
    getline(in,st2);
    
    cout<<st2;
    in.close();

    return 0;
}