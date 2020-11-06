#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int wordcount(char *str);
void Tocontinue();
void input(int *num);
void main()
{
	clrscr();
	Tocontinue();
	getch();
}

int wordcount(char *str)
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

void Tocontinue(){

    //initializing and declaring variable, array
    int size=0;
    char ch='\0';

    cout<<"\nEnter the size of the string: ";
    input(&size);

	char *str = new char[size];

	cout<<"\nEnter a string: ";
	gets(str);
	cout<<"\nThe number of words in the string are: "<<wordcount(str);

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