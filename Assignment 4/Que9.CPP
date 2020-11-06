#include <iostream.h>
#include <conio.h>
#include <ctype.h>

//function prototype
void Tocontinue();

void main()
{
	clrscr();
	Tocontinue();
	getch();
}

//function to ask user if he want to continure using program
void Tocontinue(){
	char ch='\0'; //initialized variables

	cout<<"Enter a digit or an alphabet: ";
	cin>>ch;
	
	//check if the character is alpha numeric
	if(isalnum(ch))
	{
		if(isalpha(ch))
			cout<<ch<<" is an alphabet.";
		else if(isdigit(ch))
			cout<<ch<<" is a digit.";
	}
	//if its not alphabet nor numeric digit
	else{
		cout<<"Character entered is invalid!!"; 
		Tocontinue();
	}
	//to ask user if he wants to continue
	cout<<"\n Do you want to continue(y/n): ";
	cin>>ch;
	if(ch=='y'){
		Tocontinue();
	}	
	else if(ch=='n'){
		exit(0);
	}
}
