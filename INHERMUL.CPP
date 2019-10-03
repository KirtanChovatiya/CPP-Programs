#include<iostream.h>
#include<conio.h>
 class A         //multilevel inheritance
 {
  public:
  int id;
  char name[100];

  void seta()
 {
  cout<<"Enter the employee id:";
  cin>>id;
  cout<<"Enter employee name:";
  cin>>name;
 }
 };

 class B:public A
 {
  public:
  char company[100];
  char role[100];

  void setb()
 {
  cout<<"Enter the company:";
  cin>>company;
  cout<<"Enter the role:";
  cin>>role;
 }
 };

 class C:public B
 {
  public:
  int salary;

  void setc()
 {
  cout<<"Enter the salary:";
  cin>>salary;
 }
 };

 class D:public C
 {
  public:

  void get()
  {
   cout<<endl<<"Employee id:"<<id<<endl<<"Employee name:"<<name<<endl<<"Employee role:"<<role<<endl<<"Employee company:"<<company<<endl<<"Employee salary:"<<salary<<endl;
  }
 };

 void main()
 {
  clrscr();

  D obj;

  obj.seta();
  obj.setb();
  obj.setc();
  obj.get();

  getch();
 }