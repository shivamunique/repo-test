#include<iostream>
using namespace std;

class numbers
{
public:

    void multipleof9()
    {
        for(int i=1;i<=100;i++)
        {
            if (i%9==0)
                cout<<i<<endl;
        }
    };

    void odds();
};


inline void numbers::odds()
    {
        for(int i=1;i<=100;i++)
        {
            if (i%2!=0)
                cout<<i<<endl;
        }
    };

int main()
{
numbers n;
 cout<<"ODD NUMBERS IN THE INCLUSIVE RANGE OF 1 to 100 ARE:----"<<endl;
 n.odds();
 cout<<"NUMBERS WHICH ARE MULTIPLE OF 9 IN THE INCLUSIVE RANGE OF 1 to 100 ARE:----"<<endl;
 n.multipleof9();
}

