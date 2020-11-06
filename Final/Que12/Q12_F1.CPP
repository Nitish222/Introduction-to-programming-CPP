#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int wordcount(char str[20]);

void main()
{
	clrscr();
	char str[20];
	cout<<"\nEnter a string: ";
	cin.getline(str,20);
	cout<<"\nThe number of words in the string are: "<<wordcount(str);
	getch();
}

int wordcount(char str[20])
{
	int ctr=0, wd=1;
	for(int i=0;str[i]!='\0';i++){
		ctr++;
	}
	for(i=0;i<ctr-1;i++)
	{
		if(str[i]==' ')
			wd++;
	}
	return wd;
}
