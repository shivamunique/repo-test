#include<iostream>
using namespace std;
int main(){

cout<<"Enter total number of natural numbers you want to add:: ";

int i=0,n, num[n],sum=0;

cin>>n;

cout<<"now enter all the numbers one after the other"<<endl;

for(i=0;i<n;i++)
{
   cin>>num[i];
   sum=sum+num[i];
}
cout<<"sum = "<<sum;


return 0;
}
