#include<iostream.h>
#include<conio.h>

class Employee
{
  private:
  int id;
  char name[100];
  char role[100];
  char company[100];
  char address[100];


 public:
 void setData()
 {
 cout<<"Enter the employee id:";
 cin>>id;
 cout<<"Enter employee name:";
 cin>>name;
 cout<<"Enter the employee role:";
 cin>>role;
 cout<<"Enter employee company name:";
 cin>>company;
 cout<<"Enter the employee address:";
 cin>>address;
 cout<<endl;
 }

 void getData()
 {
   cout<<endl<<"Employee id:"<<id<<endl<<"Employee name:"<<name<<endl<<"Employee role:"<<role<<endl<<"Employee company:"<<company<<endl<<"Employee address:"<<address<<endl;
 }

};

void main()
{
 Employee e1,e2,e3;
 clrscr();

 e1.setData();
 e2.setData();
 e3.setData();

 e1.getData();
 e2.getData();
 e3.getData();
 getch();
};


