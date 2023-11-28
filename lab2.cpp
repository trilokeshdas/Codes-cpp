#include<iostream>
using namespace std;

class matrix
{
    static int count;
    int row1;
    int col1;
    int row2;
    int col2;
    int **a;
    int **b;
    int **mul;
  public:
       void getdata()
       {
         cout<<"Enter the row of matrix "<<count<<" ";
         cin>>row1;
         cout<<"enter the number of columns of matrix"<<count<<" ";
         cin>>col1;
         count++;
         a=new int*[row1];
         for(int i=0; i<row1; i++)
         {
            a[i]=new int[col1];
         }
         for(int j=0; j<row1; j++)
         {
            for(int k=0; k<col1; k++)
            {
                cout<<"Enter the elements ";
                cin>>a[j][k];
            }
         }
         cout<<"Enter the row of matrix "<<count<<" ";
         cin>>row2;
         cout<<"enter the number of columns of matrix"<<count<<" ";
         cin>>col2;
         count++;
         b=new int*[row2];
         for(int i=0; i<row2; i++)
         {
            b[i]=new int[col2];
         }
         for(int j=0; j<row2; j++)
         {
            for(int k=0; k<col2; k++)
            {
                cout<<"Enter the elements ";
                cin>>b[j][k];
            }
         }

       }
       void display()
       {
        for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col1; j++)
            {
                cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        for(int i=0; i<row2; i++)
        {
            for(int j=0; j<col2; j++)
            {
                cout<<"b["<<i<<"]["<<j<<"]="<<b[i][j]<<" ";
            }
            cout<<endl;
        }
       }
       void multiply()
       {
        if(col1==row2)
        {
            mul=new int*[row1];
            for(int l=0; l<row1; l++)
            {
                mul[l]=new int[col2];
            }
            for(int i=0; i<row1; i++)
            {
                for(int j=0; j<col2; j++)
                {
                    mul[i][j]=0;
                    for(int k=0; k<col2; k++)
                    {
                        mul[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }
            cout<<endl;
        }
        else{
            cout<<"cannot multiply"<<endl;
        }
       }
       void result()
       {
            for(int i=0; i<row1; i++)
        {
            for(int j=0; j<col2; j++)
            {
                cout<<"c["<<i<<"]["<<j<<"]="<<mul[i][j]<<" ";
            }
            cout<<endl;
        }
       }
       

};
int matrix::count=1;
int main(){
    matrix m;
    m.getdata();
    m.display();
    m.multiply();
    m.result();
    return 0;
}