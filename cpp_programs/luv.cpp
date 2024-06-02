#include<iostream>
#include<string>
using namespace std;
class Student
{
	public:
		string name;
		int roll_no,phone_no;
};
int main()
{
	Student obj;
	obj.name="john";
	obj.roll_no=2;
	cout<<obj.roll_no<<endl<<obj.name;
	return 0;
}
