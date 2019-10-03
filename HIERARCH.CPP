#include<iostream.h>
#include<conio.h>

class A
{
 public:
 char name[100];
 char surname[100];

 void disp()
 {
 cout<<"Enter the name:";
 cin>>name;
 cout<<"Enter the surname:";
 cin>>surname;

  cout<<endl<<"Name:"<<name<<endl<<"Surname:"<<surname<<endl;
 }
};

class B:public A
{
 public:
 int age;
 char status[100];


 void getb()
 {
 cout<<"Enter your age:";
 cin>>age;
 cout<<"Your Status:";
 cin>>status;


  cout<<endl<<"Age:"<<age<<endl<<"Status:"<<status<<endl;
 }
};

class C:public A
{
 public:
 char birthdate[100];

 void getc()
 {
  cout<<"Enter your birthdate:";
  cin>>birthdate;

  cout<<endl<<"Birthdate:"<<birthdate<<endl;
 }
};

class D:public A
{
 public:
 char education[100];

 void getd()
 {
  cout<<"Your education details:";
  cin>>education;

  cout<<"Education:"<<education<<endl;
 }
};


void main()
{
 clrscr();

 D obj;

 obj.getd();

 getch();
}

