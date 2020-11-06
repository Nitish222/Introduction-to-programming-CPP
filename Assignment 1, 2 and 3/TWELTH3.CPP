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
	cin>>sub;
	if(sub>100)
	{
		cout<<"\nre-enter a value below 100 for subject"<< i <<": ";
		cin>>sub;
		total+=sub;
	}
	else
	{
		total+= sub;
	}
       }
  cout<<"\nThe total marks obtained are "<<total<<" Out of 500.";
  perc = (total / max)*100;
  cout<<"\nThe total percentage is :"<< perc <<"%";
  getch();
 }
