



#include <iostream>
#include<fstream>
using namespace std;

int main()
{
//ofstream o1("example");// constructor method
ofstream o1;
o1.open("example"); //member function method
char name[30];
int number;
cin>>name;
o1<<name<<endl;
cin>>number;
o1<<number;
o1.close();
}
