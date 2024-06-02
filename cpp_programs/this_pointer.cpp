#include<iostream>
using namespace std;
class number
{
int n;
public:
void get( )
{
cin>>n;
}
void show( )
{
cout<<" The min number is: "<<n;
}
number min (number x)
{
if(x.n < n)
return x;
else
return *this;
}
};
int main( )
{
number n1, n2,n3;
n1.get( );
n2.get( );
n3=n1.min(n2);
n3.show( );
return 0;
}
