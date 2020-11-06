#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();
  int a,b;
  float div=0; //initialized div with 0
  cout<<"Enter the number a: ";
  while(!(cin>>a))
{
		cout<<"Enter a number";
		cin.clear(); // clear the error flag
		cin.ignore(1000,'\n'); // ignore until the next newline
	}
 cout<<"Enter the number b: ";
  while(!(cin>>b))
{
		cout<<"Enter a number";
		cin.clear(); // clear the error flag
		cin.ignore(1000,'\n'); // ignore until the next newline
	}
  div = float(a)/float(b);  //type casting on variable a and b for division
  cout<<"The division of "<<a<<" and "<<b<<" gives: "<<div;
  getch();
 }
