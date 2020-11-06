
#include <iostream.h>
#include <conio.h>

void main ()
{
	clrscr();
	char alpha = '\0';
	int a;
	cout<<"Enter your alphabet: ";
	cin>>alpha;

	if(alpha>='a' && alpha<='v')
	{
		cout<<"\nThe alphabet entered is :"<<alpha;
		cout<<"\n\nThe next four alphabets are: ";
		for(a=0; a<5; a++)
		{
			alpha=alpha+1;
			cout<<alpha<<"  ";
		}
	}
	else
	{
	    cout<<"\n Enter alphabet between a and v.";
	}
	getch();
}
