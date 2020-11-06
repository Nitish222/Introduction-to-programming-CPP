#include <iostream.h>
#include <conio.h>

void main()

 {
  clrscr();
  int a,b;
  float div=0;
  cout<<"Enter the number a: ";
  cin>>a;
  cout<<"Enter the number b: ";
  cin>>b;
  div = float(a)/float(b);
  cout<<"The division of "<<a<<" and "<<b<<" gives: "<<div;
  getch();
 }