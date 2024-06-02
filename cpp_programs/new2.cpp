#include<iostream>
using namespace std;
class abc
{
    int a,b;
    public:
    abc()
    {
      cin>>a>>b;
      a=a+b;
      cout<<"a+b="<<a<<endl;
    }
};
int main()
{
   abc x;
}