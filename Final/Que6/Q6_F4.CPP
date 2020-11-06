#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();
	char str1[50] = "Hello world";
	char str2[50] = "world";
	char *pt = strstr(str1, str2);

	if(pt)
		cout<<str2<<" is sub string of "<<str1<<"\n";
	else
		cout<<str2<<" is not substring of "<<str1<<"\n";
	getch();
}
