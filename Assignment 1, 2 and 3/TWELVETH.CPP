#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();
  float max = 500,total = 0, perc = 0;
  float sub=0;
       for(int i=1; i<=5; i++)
       {
	cout<<"\nenter marks for subject"<<i<<" : ";
	enter:
	while(!(cin>>sub))
	{
		cout<<"\n\nerror! Please enter a float value: ";
		cin.clear();
		cin.ignore(1000,'\n');
	}
	if(sub>100)
	{
		cout<<"\nre-enter a value below 100 for subject"<< i <<": ";
		goto enter;
	}
	total+= sub;
       }
  cout<<"\nThe total marks obtained are "<<total<<" Out of 500.";
  perc = (total / max)*100;
  cout<<"\nThe total percentage is :"<< perc <<"%";
  getch();
 }
