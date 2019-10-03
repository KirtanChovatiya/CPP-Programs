#include<iostream.h>
#include<conio.h>
#include<string.h>

class Employee
{
  private:
  int id;
  char name[100];
  char role[100];
  char address[100];


 public:

 Employee()
 {

 }

 Employee(int a, char n[], char r[], char ad[])
 {
    id = a;
    strcpy(name, n);
    strcpy(role, r);
    strcpy(address, ad);

 }

 void getData()
 {
   cout<<"ID: "<<id<<endl;
   cout<<"Name: "<<name<<endl;
   cout<<"Role: "<<role<<endl;
   cout<<"Address: "<<address<<endl;
 }

};

void main()
{
  Employee e1(1, "MK", "Admin", "Surat"); //perameterized constructor object
  Employee e2(2, "KC", "Manager", "China");
  Employee e3(3, "JD", "Employee", "Bhutan");
  Employee e; //default constructor object

  clrscr();

  e1.getData();
  e2.getData();
  e3.getData();

  getch();
}