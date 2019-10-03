#include<iostream.h>
#include<conio.h>

class Employee
{
  private:
  int id;
  char name[100];
  char role[100];
  static char boss[20];
  static char company[100];
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
 cout<<"Enter the employee address:";
 cin>>address;
 cout<<endl;
 }

 void getData()
 {
   cout<<endl<<"Employee id:"<<id<<endl<<"Employee name:"<<name<<endl<<"Employee role:"<<role<<endl<<"Boss Name:"<<boss<<endl<<"Employee company:"<<company<<endl<<"Employee address:"<<address<<endl;
 }

};

  char Employee::boss[20]="Vivian Shah";
  char Employee::company[100]="Narola";

  void main()
{
  Employee e[10];
  int i;
  clrscr();

  for(i=0;i<3;i++)
  {
    e[i].setData();
  }
  for(i=0;i<3;i++)
  {
    e[i].getData();
  }
  getch();
}