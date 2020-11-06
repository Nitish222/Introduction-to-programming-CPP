#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();
  float l=0,b=0,area=0; //initialized area length, and breadth with 0
  cout<<"Enter length of the rectangle: ";
   while(!(cin>>l)) //inputing radius of circle until user is not entering anything 
{
  cout<<”error: Please enter a integer number”;
  cin.clear();  // clear the error flag
  cin.ignore(1000,’\n’);  // ignore until the next newline
  }

  cout<<"Enter breadth of the rectangle: ";
   while(!(cin>>b)) //inputing radius of circle until user is not entering anything 
{
  cout<<”error: Please enter a integer number”;
  cin.clear();  // clear the error flag
  cin.ignore(1000,’\n’);  // ignore until the next newline
  }
  area = l * b;  //applied area formula that is length X breadth
  cout<<"The area of the rectangle with length= "<<l<<" and breadth= "<<b<<" is: "<<area; 
  getch();
 }
