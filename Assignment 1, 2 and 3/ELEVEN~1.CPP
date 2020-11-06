#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();  //clear the previous output of console screen
  int num=0;   //declared variable num and initialized with 0
  cout<<"Enter a integer number: ";
  while(!(cin>>num)) //inputing radius of circle until user is not entering anything 
{
  cout<<"error: Please enter a integer number";
  cin.clear();  // clear the error flag
  cin.ignore(1000,'\n');  // ignore until the next newline
  }
  int cube=0;  //declared variable cube and initialized with 0
  cube = num*num*num;  //cube of the number is calculated
  cout<<"The cube of the number is "<<cube;
  getch();
 }
