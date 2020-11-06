#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();
  int r;
  cout<<"Enter the radius of the circle: ";
  while(!(cin>>r)) //inputing radius of circle until user is not entering anything
  {
  cout<<"error: Please enter a integer number";
  cin.clear();  // clear the error flag
  cin.ignore(1000,'\n');  // ignore until the next newline
  }

  const float pi=3.14;
  float area = 0;  //initialized area with 0
  area = pi*r*r;
  float circ = 0;  //initialized circumference variable circ with 0
  circ = 2*pi*r;
  cout<<"The circumference of the circle is :"<<circ<<" and the area is :"<<area;
  getch();
 }

					    f