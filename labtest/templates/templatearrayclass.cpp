#include<iostream>
using namespace std;
template<class T>
class maxterm
{
    T*a;
    int size;
public:
    maxterm(int n)
    {
        size=n;
        a=new T[size];
    }
    void setdata()
    {
        int i;
        for(i=0; i<size; i++)
        {
            cout<<"enter teh values"<<endl;
            cin>>a[i];
        }
    }
    T max()
    {
         T maxim=a[0];
        for(int i=0; i<size; i++)
        {
            if(a[i]>maxim)
            {
                maxim=a[i];
            }
        }
        return maxim;
    }
    
    
};

// template<class T>
// T maxterm<T>::max()
// {
//      T maxim=a[0];
//         for(int i=0; i<size; i++)
//         {
//             if(a[i]>maxim)
//             {
//                 maxim=a[i];
//             }
//         }
//         return maxim;
// }

int main(){
    maxterm <float>m1(3);
    m1.setdata();
    cout<<"the maximum value is "<<m1.max()<<endl;
    return 0;
}