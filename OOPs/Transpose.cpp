#include<iostream>
using namespace std;
void mul(int a[][3], int b[][3])
{
    int mul[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            mul[i][j]=0;
            for(int k=0; k<3; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++){
            cout<<" a["<<i<<"]["<<j<<"]="<<mul[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
void transpose(int a[][3])
{   
    for(int i=0; i<3; i++)
    {
        for(int j=i; j<3; j++)
        {
            if(i!=j)
            {
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++){
            cout<<" a["<<i<<"]["<<j<<"]="<<a[i][j];
        }
        cout<<endl;
    }
    
}
int main(){
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    int b[3][3]={{9,8,7},
                 {6,5,4},
                 {3,2,1}};
    
    mul(a,b);
    
    transpose(a);
    
    return 0;
}