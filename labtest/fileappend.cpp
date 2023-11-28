#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("append.txt",ios::app);
    out<<"the data is appended"<<endl;

    out.close();
    return 0;
}