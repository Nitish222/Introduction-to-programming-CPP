#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


void capitalize(char str[50]);

void main()
{
	clrscr();
	char str[50];
	cout<<"\nEnter a String: ";
	gets(str);
	capitalize(str);
	getch();
}

void capitalize(char str[50])
{
	int slen=0;
	slen = strlen(str);
	for(int i=0;i<slen;++i)
	{
		if(i==0)
		{
			if(islower(str[i]))
				str[i]=toupper(str[i]);
		}
		else
		{
			if(str[i] != ' ')
			{
				if(isupper(str[i]))
					str[i] = tolower(str[i]);
			}
			else
			{
				i++;
				if(islower(str[i]))
					str[i]=toupper(str[i]);
			}
		}
	}
	cout<<"The updated string is : "<<str;
}
