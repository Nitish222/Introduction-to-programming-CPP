#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

int palindrome(char str[25]);

void main()
{
	clrscr();
	char str[25];
	cout<<"\nEnter a String: ";
	gets(str);
	
	if(palindrome(str)==1)
		cout<<"\nThis string is not a palindrome!";
	else
		cout<<"\nThis string is a palindrome!";

	getch();
}

int palindrome(char str[25])
{
	int count=0, length=0;
	length =strlen(str);
	for(int i=0;i<length;i++)
	{
		if(str[i] != str[length-i-1])
		{
			count=1;
			break;
		}
	}
	return count;
}
