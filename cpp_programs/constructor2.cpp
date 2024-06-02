
#include<iostream>
using namespace std;
#include<string.h>
class student{

 string name;
 int rollno;
 float marks;
public:
    student(int roll)
    {
        rollno=roll;
        cin>>marks>>name;
    }
    void display(){
    cout<<name<<endl<<marks<<endl<<rollno;
    }
};
int main()
{
    student x(31);
    x.display();
    return 0;

}
