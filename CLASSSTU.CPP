#include<iostream.h>
#include<conio.h>

class Student
{
 private:
 int id;
 char name[100];
 int std;
 char clg[100];

 public:
 // setter
 void setData()
 {
   cout<<"Enter the id:";
 cin>>id;
 cout<<"Enter name:";
 cin>>name;
 cout<<"Enter the std:";
 cin>>std;
 cout<<"Enter clg name:";
 cin>>clg;
 cout<<endl;
 }

 // getter
 void getData()
 {
   cout<<endl<<"Id:"<<id<<endl<<"Name:"<<name<<endl<<"Std:"<<std<<endl<<"Clg:"<<clg<<endl;
 }

};

void main()
{
 Student s1,s2,s3,s4;
 clrscr();

 s1.setData();
 s2.setData();

 s1.getData();
 s2.getData();

 getch();
};

