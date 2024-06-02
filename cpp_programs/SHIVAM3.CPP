#include<iostream>
using namespace std;
class groot{
    char name[50];
    public:
     groot()
    {
      cin>>name;
      for(int i=0;i<=50;i++)
      {
          if(name[i]=='g'||name[i]=='r'||name[i]=='o'||name[i]=='t')

            cout<<"Match Found!"<<endl<<name[i]<<endl;

         else cout<<"\nmatch NOT Found!";
     }
};
};
int main()
{
 class groot a;
}
