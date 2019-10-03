#include<iostream.h>
#include<conio.h>

class Display //when fuction under the class it's called method overloading
{
  public:


void display()
{
 cout<<"display"<<endl;
}
void display(int a)
{
 cout<<a<<endl;
}
void display(int a,int b)
{
 cout<<a<<endl<<b<<endl;
}
void display(double a)
{
 cout<<a;
}
};


void main()
{
 Display s1;
 clrscr();

 s1.display();
 s1.display(5);
 s1.display(8,9);
 s1.display(6.6);

 getch();
}