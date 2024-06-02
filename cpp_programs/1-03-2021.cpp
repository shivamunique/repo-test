#include<iostream>
#include<string>
using namespace std;
int main()
{
string s1("12345");
string s2 = "abcde";
string s3,s4;
cout<<"Original Strings are: \n";
cout<<"S1 = "<<s1<<"\n";
cout<<"S2 = "<<s2<<"\n\n";

//concatenation
s3=s1+' ' + s2;
cout<<"Concatenation is: "<<s3<<endl;
s3+=" QERT";
cout<<"S3 after concat using += "<<s3<<endl<<endl;

//comparison
if(s1>s2)
{
cout<<"S1 is greater\n";
}
if(s2>s1)
{
cout<<"S2 is greater\n";
}
if(s1==s2)
{
cout<<"Both are equal\n";
}
if(s1!=s3)
{
cout<<"S1 is not equal to s3\n\n";
}

//length
cout<<"The length of s1 is: "<<s1.length()<<endl;
cout<<"The length of s2 is: "<<s2.size()<<endl;
cout<<"To check empty string: "<<s4.empty()<<endl<<endl;

//Inserting a string into another-- insert(pos,s1)
cout<<"Place S2 inside S1 \n";
s1.insert(4,s2); //inserts string s2 at position 4 starting from 0
cout<<"Modified S1 = "<<s1<<"\n\n";

//Removing character in a string-- erase(pos,len)
cout<<"Removing 5 characters from S1 \n";
s1.erase(4,5); //erases string from 4th pos upto length-5
cout<<" Now S1: "<<s1<<"\n\n";

//Replacing character in a string-- replace(pos,len,s1)
cout<<"Replace middle 3 characters in S2 with S1\n";
s2.replace(1,3,s1);
cout<<"Now S2: "<<s2<<"\n";

//sub string-- substr(pos,len)
cout<<"Sub string from s1 is: "<<s1.substr(2,2)<<endl;
cout<<"Sub string from s1 is: "<<s1.substr(2)<<endl<<endl;

//find location-- find(str)
cout<<"Find the location of 3 in s1: "<<s1.find("3")<<endl;
cout<<"Find the location of 3 in s3 from right : "<<s3.rfind("3");

return 0;
}



