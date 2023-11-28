#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="trilokesh das";
    string st2;
    string filename="file1.txt";
    ofstream outfile;
    outfile.open(filename);
    outfile<<st;
    outfile.close();

    ifstream infile;
    infile.open("file1.txt");
    getline(infile,st2);
    cout<<st2;
    infile.close();
    return 0;
}