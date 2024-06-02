#include<iostream>
using namespace std;

class B;
class C;

class A{
int d=10;
public:
friend largest (A,B,C);
};
class B{
int e=100;
public:
friend largest (A,B,C);
};
class C{
int f=1000;
public:
friend largest (A,B,C);
};
int largest(A x, B y ,C z)
{
    if((x.d>x.e) && (x.d>x.f))
        return x.d;
    else
        if(x.e>x.f)
        return x.e;
    else return x.f;
}

int main()
{

    A o1;
    B o2;
    C o3;

cout<<largest(o1,o2 o3);
return 0;
}
