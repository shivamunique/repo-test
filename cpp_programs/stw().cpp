#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{

    double a=22.32323232;
    cout<<setprecision(4)<<a<<endl;
    cout<<setw(6)<<a<<endl;
    cout<<a<<ends<<"\n\nhello\n";
 cout<<"my name is buffer"<<endl;
 cout.flush();


 cout<<setbase(10)<<0x61fe18<<endl;
 string s1("shivam"), s2("12345");

 s1.erase(2,1);
 cout<<"s1.erase(2,1)\n"<<s1<<endl;
 s1.replace(2,3,s2);
 cout<<"s1.replace(2,3,s2)\n"<<s1<<endl;
 s1.insert(5,"s2");
 cout<<"s1.insert(5,s2)\n"<<s1<<endl<<s1.capacity()<<endl<<s1.max_size()<<endl
     <<(s1.empty()?"YES":"NO")<<endl<<s1.length()<<endl<<s1.size()<<endl;


string s5("shivam bhardwaj");
cout<<"element at 5th position in the string is::"<<setw(2)<<s5.at(5)<<endl
    <<"surname of the person is::"<<setw(2)<<s5.substr(7,14)<<endl
    <<"find the position of substring rdwa in the string s5::"<<setw(4)<<s5.find("rdwa")<<endl;
}
