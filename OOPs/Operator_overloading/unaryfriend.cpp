#include<iostream>
using namespace std;

class abc
{
int m,n;
public:
abc()
{
m=8;
n=9;
}
void show()
{
cout<<m<<n<<endl;
}
friend void operator --(abc & p);
};
void operator -- (abc & p)
{
--p.m;
--p.n;
}

int main()
{
abc x;
x.show();
--x;
x.show();
}