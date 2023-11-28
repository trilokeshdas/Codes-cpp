#include<iostream>
using namespace std;
int *merge(int *a, int *b,int ub1, int ub2)
{   
    int i=0,j=0,k=0;
    int *sort=(int *)malloc((ub1+ub2)*sizeof(int));
    while(i<ub1 && j<ub2)
    {
        if(a[i]<b[j])
        {
            sort[k]=a[i];
            i++;
            k++;
        }
        else
        {
            sort[k]=b[j];
            j++;
            k++;
        }
    }
    if(i>=ub1)
    {
        while(j<ub2)
        {
            sort[k]=b[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<ub1)
        {
            sort[k]=a[i];
            i++;
            k++;
        }
    }
    return sort;
}
int main(){
    int a[5]={1,3,4,5,6};
    int b[6]={7,10,11,48,78,99};
    int *p=merge(a,b,5,6);
    for(int i=0; i<11; i++)
    {
        cout<<" "<<p[i];
    }
    return 0;
}