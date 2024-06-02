#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

 class area
  {
       static int l,b;
     public:
         area()
         {
             cout<<setw(10)<<(l*b)<<endl<<l-1<<endl<<b-1<<endl;

         };
  };
  int area::l=2;
 int area::b=3;


int main()
{

  class area a,b;
  return 0;
}

