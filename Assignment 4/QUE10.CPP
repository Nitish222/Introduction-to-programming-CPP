#include <iostream.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

void Tocontinue();
void main()
{
	clrscr();
	Tocontinue();
	getch();
}

//function to ask user if he want to continure using program
void Tocontinue(){
	char ch='\0';
	
	cout<<"Enter a character: ";
	cin>>ch;
	
	//check if the character is alphabet
	if(isalpha(ch))
	{
		//check if the character is lowercase
		if(islower(ch))
		{
			cout<<"\n"<<ch<<" is a lowercase alphabet.";
			//convert it to uppercase
			ch=toupper(ch);

			cout<<"\n\n In uppercase it is "<<ch;
		}
		//check if the character is uppercase
		else if(isupper(ch))
		{
			cout<<"\n"<<ch<<" is an uppercase alphabet.";
			//convert it to lowercase
			ch=tolower(ch);

			cout<<"\n\n In lowercase it is : "<<ch;
		}
	}
	//check if it is numeric digit
	else if(isdigit(ch)){
		cout<<ch<<" is a digit.";
	}
	//if not alphabet nor numeric digit
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
