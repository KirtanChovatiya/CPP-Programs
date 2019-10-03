#include<iostream.h>
#include<conio.h>

class A
{
  public:
  int id;
  char name[100];
  float salary;
  char role[100];

  void show()
  {
   cout<<"Enter the id:";
   cin>>id;
   cout<<"Enter the name:";
   cin>>name;
  }
};

class B:public A
{
  public:

  void show()
  {
   cout<<"Enter the salary:";
   cin>>salary;
   cout<<"Enter the role:";
   cin>>role;

   cout<<endl<<"Employee id:"<<id<<endl<<"Employee name:"<<name<<endl<<"Employee salary:"<<salary<<endl<<"Employe role:"<<role<<endl;
  }
};


void main()
{
 clrscr();
 B o1;

 o1.A::show();
 o1.show();
 getch();
}