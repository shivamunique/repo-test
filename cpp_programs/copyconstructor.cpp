
#include<iostream>
using namespace std;

class number{
public:
    int a,rev,t;

    number(int x)
    {
        a=x;
        while(x!=0)
        {
          t=x%10;
          rev=rev*10+t;
          x=x/10;
        } cout<<"reverse ="<<rev<<endl;
    }

    number(number&c)
    {
       a=c.a;

       if(c.rev==a)
          cout<<"pallindrome"<<endl;
       else
        cout<<"not pallindrome"<<endl;


    }
};


int main(){

int z;
cin>>z;
number p(z);
number q(p);
return 0;

}
