#include <iostream.h>
#include <conio.h>

void main ()
{
	clrscr();
	char alpha = '\0';
	int i;
	cout<<"Enter your alphabet between a and v: ";
	cin>>alpha;
	cout<<"\nThe alphabet entered is :"<<alpha;
	cout<<"\n\nThe next four alphabets are: ";
	for(i=0; i<5; i++)   //Loop ran for printing the next four character
		{
			alpha=alpha+1;
			cout<<alpha<<"  ";
		}
	getch();
}
