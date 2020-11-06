#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


void capitalize(char *str);
void Tocontinue();
void input(int *num);

void main()
{
	clrscr();
	Tocontinue();
	getch();
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

    capitalize(str);

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

void capitalize(char *str)
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
