#include <iostream.h>
#include <conio.h>

void main()
 {
  clrscr();
  float max = 500,total = 0, perc = 0;
  int sub1, sub2, sub3, sub4, sub5;
  cout<<"Enter marks of the first subject: ";
  cin>>sub1;
  cout<<"\nEnter marks of the second subject: ";
  cin>>sub2;
  cout<<"\nEnter marks of the third subject: ";
  cin>>sub3;
  cout<<"\nEnter marks of the fourth subject: ";
  cin>>sub4;
  cout<<"\nEnter marks of the fifth subject: ";
  cin>>sub5;
  total = sub1+ sub2 + sub3 + sub4 + sub5;
  cout<<"\nThe total marks obtained are "<<total<<" Out of 500.";
  perc = (total / max)*100;
  cout<<"\nThe total percentage is :"<< perc <<"%";
  getch();
 }