#include<iostream>
using namespace std;

class alpha
{
    int x;
public:
  void put()
  {
         this->x=x;
  }


    void get()
    {
        cin>>x;
    }
};

int main(){
alpha a,b;
a.get();
b.get();
a.put();
b.put();

if((a.x)>(b.x))
    cout<<a.x<<" is greater"<<endl;
else
     cout<<b.x<<" is greater"<<endl;


}
