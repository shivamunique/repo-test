#include<iostream>
using namespace std;
class book
{
private:
    int bid;
    char bname[30];
    float price;
    int pages;
public:
    void getdata()
    {
     cout<<"book name::";

      for(int i=0;i<30;i++)
      {
        cin>>bname[i];
      }
      cout<<endl<<"Total pages::"<<endl<<"Book id::"<<endl<<"price::"<<endl;
      cin>>pages>>bid>>price;

    }
  void putdata();
};

void book::putdata()
{

    cout<<"Book Name::";
      for(int i=0;i<30;i++)
      {
        cout<<bname[i];
      }
      cout<<"Total Pages::"<<pages<<endl<<"Book id::"<<bid<<endl<<"price::"<<price<<endl;

}

int main()
{
 int n;
 cout<<"enter the number of books you want to input::";
 cin>>n;
 book b[n];
 cout<<"now enter the detail of each book one after the other. "<<endl;
 for (int  i = 0; i < n; i++)
 {
    b[i].getdata();
 }

 for (int  i = 0; i < n; i++)
 {
    b[i].putdata();
}
}
