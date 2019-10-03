#include<iostream.h>
#include<conio.h>

class A
{
 public:
 int id;
 char name[100];

 void geta()
 {
  cout<<"Enter the id:";
  cin>>id;
  cout<<"Enter the name:";
  cin>>name;
 }

 void disp()
 {
  cout<<endl<<"id:"<<id<<endl<<"Name:"<<name<<endl;
 }
};

class B:public A
{
 public:
 char company[100];
 char roal[100];

 void getb()
 {
  cout<<"Enter the company name:";
  cin>>company;
  cout<<"Enter the roal:";
  cin>>roal;
 }
 void disp()
 {
  cout<<endl<<"Company:"<<company<<endl<<"Roal:"<<roal<<endl;
 }
};

class C:public A
{
 public:
 char education[100];

 void getc()
 {
  cout<<"your education details:";
  cin>>education;
 }
 void disp()
 {
  cout<<endl<<"Education:"<<education<<endl;
 }
};

class D:public B,public C
{


};


void main()
{
 clrscr();

 D o1;

 o1.geta();
 o1.A::disp();

 getch();
}