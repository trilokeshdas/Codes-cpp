#include<iostream>
using namespace std;

int main(){
    enum months{
         jan=1,
         feb,
         march,
         april,
         may,
         june,
         july,
         august,
         sep,
         oct,
         nov,
         dec,   
    };
    for(int i=jan; i<=dec; i++){
        cout<<i<<" "<<endl;
    }
    return 0;
}   