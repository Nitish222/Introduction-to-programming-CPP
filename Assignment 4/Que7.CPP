#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

//Prototype for all functions
int sum(int num);
void Tocontinue();
void input();

void main()
{
	clrscr();
	Tocontinue();
	getch();
}
int sum(int limit)
{
	//Base case for recursive function
	if(limit>1)
		return (limit + sum(limit-1));

	else
		return 1;
}

//function fur inputing 
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Enter a positive integer: ";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}

//function to ask user if he want to continure using program
void Tocontinue(){
	int limit=0;   //initialized variables
	char ch='\0';
	
	cout<<"Enter the limit for the sum: ";
	input(&limit); //inputting limit 
	
	//function call to print sum
	cout<<"The sum of the numbers till "<<limit<<" is: "<<sum(limit);
	
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