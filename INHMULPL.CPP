#include<iostream.h>
#include<conio.h>

class A   //multiple inheritance
{
 public:
 int id;
 char name[100];

 void seta()
 {
  cout<<"Enter the id:";
  cin>>id;
  cout<<"Enter the name:";
  cin>>name;
 }
};

class B
{
 public:
 int std;
 char school[100];

 void setb()
 {
  cout<<"Enter the std:";
  cin>>std;
  cout<<"Enter the school name:";
  cin>>school;
 }
};

class C:public A,public B
{
  public:

  void get()
  {
   cout<<endl<<"student id:"<<id<<endl<<"student name:"<<name<<endl<<"student std:"<<std<<endl<<"school name:"<<school<<endl;
  }
};

void main()
{
 clrscr();
 C s1;
 s1.seta();
 s1.setb();
 s1.get();
 getch();
}

