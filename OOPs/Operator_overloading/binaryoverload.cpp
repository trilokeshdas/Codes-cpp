#include<iostream>
using namespace std;

class complex
{
float real,img;
public:
complex()
{
real=0;
img=0;
}
complex(float r,float i)
{
real=r;
img=i;

}
void show()
{
cout<<real<<img<<endl;
}
friend complex operator+(complex & p,complex &q);
};
complex operator+(complex & p,complex & q)
{
complex w;
w.real=p.real+q.real;
w.img=p.img+q.img;
return w;
}

int main()
{
complex s(3,4);complex t(4,5);
complex m;
m=s+t;
s.show();t.show();
m.show();
}