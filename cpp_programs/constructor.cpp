#include<iostream>
using namespace std;

class interest{
    double p,r,t;
    public:
    interest()
    {
        cin>>p>>r>>t;
    }
     void simpleint()
    {
       cout<<(p*r*t*0.01)<<endl;
    }

};

int main()
{
    interest k;
    k.simpleint();
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------//
