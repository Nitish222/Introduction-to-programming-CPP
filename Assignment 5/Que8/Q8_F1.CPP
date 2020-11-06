#include<iostream.h>
#include<conio.h>
#include<string.h>

void printing(char arry[]);
void reverse(char arry[]);

void main()
{
	clrscr();
	char arry[] = {"HelloWorld"};
	cout<<"\n The character array inputted is: ";
	printing(arry);
	reverse(arry);
	getch();
}
void printing(char arry[])
{
	cout<<arry;
}
void reverse(char arry[])
{
	cout<<"\nAfter reversing ";
	printing(strrev(arry));
}