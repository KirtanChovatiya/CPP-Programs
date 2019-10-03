#include<iostream.h>
#include<conio.h>

class A
{
 public:
 int id;
 char name[100];
 float salary;
 float time;
 char role[100];

 void seta()
 {
  cout<<"Enter the id:";
  cin>>id;
 }
};

class B:public A
{
 public:

 void setb()
 {
  cout<<"Enter the name:";
  cin>>name;
 }
};

class C:public B
{
 public:

 void setc()
 {
  cout<<"Enter the salary:";
  cin>>salary;
 }
};

class D:public C
{
 public:

 void setd()
 {
  cout<<"Enter your working hour:";
  cin>>time;
 }
};

class E:public D
{
 public:

 void sete()
 {

  if(salary>=10000 && salary<=100000 || time>=7 && time<=12)
  {
   cout<<endl<<"Staff member"<<role;
  }

 else if(salary>=100000 && salary<=200000 || time>=1 && time<=6)
   {
    cout<<endl<<"Manager"<<role;
   }
 else
 {
	cout<<endl<<"Peon"<<role;
 }
 }
};

class F:public E
{
 public:

 void get()
 {
    cout<<endl<<"Employee id:"<<id<<endl<<"Name:"<<name<<endl<<"salary:"<<salary<<endl<<"Time:"<<time<<endl;
 }
};


void main()
{
 clrscr();
 F o1;



  o1.seta();
  o1.setb();
  o1.setc();
  o1.setd();
  o1.sete();
  o1.get();

 getch();
}