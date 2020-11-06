#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int palindrome(char *str);
void Tocontinue();
void input(int *num);

void main()
{
    clrscr();
    Tocontinue();
    getch();
}
int palindrome(char *str)
{
    int count=0, length=0;
    length = strlen(str);
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

void Tocontinue(){

    //initializing and declaring variable, array
    int size=0;
    char ch='\0';

    cout<<"\nEnter the size of the string: ";
    input(&size);

	char *str = new char[size];

	cout<<"\nEnter a string: ";
	gets(str);

    if(palindrome(str)==1)
	   cout<<"\nThis string is not a palindrome!";
    else
	   cout<<"\nThis string is a palindrome!";

    //ask user if he want to continue using program
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
	  Tocontinue();
    }
    else if(ch=='n'||ch=='N'){
	  exit(0);
    }
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}