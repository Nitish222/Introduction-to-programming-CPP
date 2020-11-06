#include <iostream.h>
#include <conio.h>

void main()
 {
  clrscr();
  int r;
  cout<<"Enter the radius of the circle: ";
  cin>>r;
  const float pi=3.14;
  float area;
  area = pi*r*r;
  float circ;
  circ = 2*pi*r;
  cout<<"The circumference of the circle is :"<<circ<<" and the area is :"<<area;
  getch();
 }