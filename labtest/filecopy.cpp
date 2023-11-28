#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream out("original.txt");
    // out<<"data to be copied 1"<<endl;
    // out<<"data to be copied 2"<<endl;
    // out<<"data to be copied 3"<<endl;
    // out.close();
    string st;
    ifstream in("original.txt");
    ofstream out("copy.txt");
    while(getline(in,st))
    {
        out<<st<<endl;
    }
    in.close();
    out.close();

    return 0;
}