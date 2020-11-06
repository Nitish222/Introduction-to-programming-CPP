#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();
  int num,sqr=0; //declared num and sqr, and initialized sqr with 0
  cout<<"Enter a number: ";
  while(!(cin>>num)){
  cout<<"error: Please enter a integer number";
  cin.clear();  // clear the error flag
  cin.ignore(1000,'\n');  // ignore until the next newline
  }
  sqr= num*num;  // multiplied num two times for square
  cout<<"The square of "<<num<<" is equal to :  "<<sqr; //print square of no.
  getch();
 }
