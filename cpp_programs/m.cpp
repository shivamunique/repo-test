#include<iostream>
using namespace std;
class Hello
{
public:
static int count;
};
int Hello::count = 0;

int main()
{
cout<<Hello::count;
return 0;
}
