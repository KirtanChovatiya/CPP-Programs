#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b;
  char op;
  clrscr();

  cout<<"Enter the first number:";
  cin>>a;

  cout<<"Enter the second number:";
  cin>>b;

  cout<<"Enter the choice(+,-,*,/): ";
  cin>>op;

  switch(op)
  {
   case '+':
   cout<<"Addition is: "<<a+b;
   break;

   case '-':
   cout<<"Subtraction is: "<<a-b;
   break;

   case '*':
   cout<<"Multiplication is: "<<a*b;
   break;

   case '/':
   cout<<"Division is: "<<a/b;
   break;

   default:
   cout<<"Error! operator is not correct";
   break;
  }
  getch();
}