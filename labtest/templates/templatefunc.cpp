#include<iostream>
using namespace std;
//code to find the maximum element in an array
template<typename T>
T max(T*a,int n)
{
    int maxim=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>maxim)
        {
            maxim=a[i];
        }
    }
    return maxim;
}
//to find maximum between two elemeents
template<typename T>
T cmp(T a,T b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
template<typename T>
T min1(T a, T b)
{
   if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    } 
}

int main(){
    int a[]={0,2,6,1,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<max<int>(a,n)<<endl;
    cout<<cmp<int>(10,20)<<endl;
    cout<<min1<float>(1.25,4.56);
    return 0;
}