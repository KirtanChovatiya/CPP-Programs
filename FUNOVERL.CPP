#include<iostream.h>
#include<conio.h>

void display()     //function overloading
{
 cout<<"display"<<endl;
}
void display(int a)
{
 cout<<a<<endl;
}
void display(int b,int c)
{
 cout<<b<<endl<<c<<endl;
}
void display(double s)
{
 cout<<s;
}

void main()
{
 clrscr();

 display();
 display(5);
 display(8,9);
 display(6.6);

 getch();
}