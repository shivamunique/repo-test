/*#include<iostream>
using namespace std;

class B;

class A{
int a;
public:
    void get(){
     a=10;};
friend void B::input(A );
};
class B {
int b;
public:
    void input(A o1)
    {b=20;
    cout<<o1.a+b;
    }
    };

int main ()
{
  A x;
  B y;
  x.get();
  y.input(x);
  return 0;
}*/




/*#include<iostream>
using namespace std;
class XYZ;
class ABC
{
int a;
public:
void setvalue(XYZ obj1);

};
class XYZ
{
int x;
public:
void set(int value)
{
x=value;
}
friend void ABC::setvalue(XYZ obj1);
};
void ABC:: setvalue(XYZ obj1)
{
a=obj1.x;
cout<<"Value is:"<<a;
}

int main()
{
XYZ X;
ABC A;
X.set(5);
A.setvalue(X);
return 0;
}*/

#include<iostream>
using namespace std;

class A;

class area{
public:
void put(A obj1);

};


class A{
int l , w;
public:
void get()
{ l=10;
  w=5;
};
friend void area:: put(A obj1);
};

void area::put(A obj1)
{
    cout<<"Area= "<<(obj1.l)*(obj1.w);
}


 int main(){
A k;
area m;
k.get();
m.put(k);
return 0;
}


