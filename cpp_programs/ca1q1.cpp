#include<iostream>
using namespace std;

class test{
int x;
int y;

public:

void getdata()
 {
   cin>>x>>y;
 }

friend void task1(test s);
friend void task2(test s);

};

void task1(test s)
{
    int squares[(s.x)]={0};
 for(int i=0;i<(s.x);i++)
 {
    squares[i]=(i+1)*(i+1);

    cout<<squares[i]<<endl;;
 }
};

void task2(test s)
{

    int sum=0;
    int j=0;
  for(j=1;j<=(s.y);j++)
   {
      sum=sum+j;
   } cout<<endl<<endl<<"sum ="<<sum<<endl;

}

int main()
{

test t;
t.getdata();
task1(t);
task2(t);

}

