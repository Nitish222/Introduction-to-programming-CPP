#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();
  int a,b,sum=0;
  cout<<"\nEnter the first number: ";
  while(!(cin>>a)){
  cout<<"error: Please enter a integer number";
  cin.clear();
  cin.ignore(1000,'\n');
  }
  cout<<"Enter the second number: ";
  while(!(cin>>b)){
  cout<<"error: Please enter a integer number";
  cin.clear();
  cin.ignore(1000,'\n');
  }
  sum = a + b;
  cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum;
  getch();
 }
