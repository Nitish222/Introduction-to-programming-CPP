#include <iostream.h>
#include <conio.h>

void main()
 {
  clrscr();
  float l=0,b=0,area=0;
  cout<<"Enter length of the rectangle: ";
  cin>>l;
  cout<<"Enter breadth of the rectangle: ";
  cin>>b;
  area = l * b;
  cout<<"The area of the rectangle with length= "<<l<<" and breath= "<<b<<" is: "<<area;
  getch();
 }