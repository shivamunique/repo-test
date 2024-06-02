#include<iostream>
using namespace std;

class test{
    int x;
    int y;

public:
    void getdata()
    {
     cout<<"enter the value of x and y respectively "<<endl;
     cin>>x>>y;
     cout<<endl;
    }

friend void task1(test s);
friend void task2(test s);

};

void task1(test s)
{
 int square=0;
 for(int i=1;i<=(s.x);i++)
 {
     square=0;
    square=(i*i);
    cout<<square<<endl;
 }
};

void task2(test s)
{
    int sum=0;
  for(int j=1;j<=(s.y);j++)
   {
      sum=sum+j;
   } cout<<endl<<"sum ="<<sum<<endl;

}

int main()
{

test t;
t.getdata();
task1(t);
task2(t);

}

