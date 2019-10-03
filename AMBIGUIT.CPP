#include<iostream.h>
#include<conio.h>

class A
{
 public:
 char name[100];
 char surname[100];

 void get()
 {
 cout<<"Enter the name:";
 cin>>name;
 cout<<"Enter the surname:";
 cin>>surname;

  cout<<endl<<"Name:"<<name<<endl<<"Surname:"<<surname<<endl;
 }
};

class B
{
 public:
 int age;
 char status[100];


 void get()
 {
 cout<<"Enter your age:";
 cin>>age;
 cout<<"Your Status:";
 cin>>status;


  cout<<endl<<"Age:"<<age<<endl<<"Status:"<<status<<endl;
 }
};

class C:public A,public B
{


};


void main()
{
  clrscr();
  C obj;
  obj.A::get(); //use membership label operator

  getch();

}