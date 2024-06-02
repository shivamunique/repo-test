#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter any three number one after the other:"<<endl;
    cin>>n1>>n2>>n3;

    if(n1>n2&&n1>n3)
    cout<<"largest="<<n1<<endl;
    else if (n2>n3)
        cout<<"latgest="<<n2<<endl;
    else cout<<"largest="<<n3<<endl;


}
