
#include<iostream>
using namespace std;
class C;
class B;
class A
{
int a;
public:
void geta()
{
cin>>a;
}
friend int maximum(A,B,C);
};
class B
{
int b;
public:
void getb()
{
cin>>b;
}
friend int maximum(A,B,C);
};
class C
{
int c;
public:
void getc()
{cin>>c;
}
friend int maximum(A,B,C);
};
int maximum(A x, B y, C z)
{
if((x.a>y.b)&&(x.a>z.c))
return x.a;
else if((y.b>x.a)&&(y.b>z.c))
return y.b;
else
return z.c;
}
int main()
{
A o1; B o2; C o3;
o1.geta();
o2.getb();
o3.getc();
cout<<maximum(o1,o2,o3);
return 0;
}
