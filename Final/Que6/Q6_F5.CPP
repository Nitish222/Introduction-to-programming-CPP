#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();
	char str[50] = "Hello World";
	char ch = 'W';
	if(strchr(str,ch))
		cout<<ch<<" is present in the string "<<str;
	else
		cout<<ch<<" is not present in the string '"<<str<<"'";
	getch();
}
