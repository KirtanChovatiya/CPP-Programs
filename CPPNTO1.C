#include<iostream.h>
#include<conio.h>
void main()
{
 int i,n;
 clrscr();

 cout<<"Enter the number:"<<" ";
 cin>>n;

 i=n;

 do
 {
   cout<<i<<"  ";
   i--;
 }
 while(i>=1);
 getch();
}