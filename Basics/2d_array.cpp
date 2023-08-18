#include<iostream>
using namespace std;

int main(){
    int a[2][3]={ {1,2,3},
                  {9,8,7},    
                  };
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
        }
    }
    return 0;
}