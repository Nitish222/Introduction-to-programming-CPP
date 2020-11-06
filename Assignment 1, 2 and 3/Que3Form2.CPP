#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

//Prototype for all functions
int factorial(int n);
void Tocontinue();
void input();

void main(){
	clrscr();
	Tocontinue();
	getch();
}

//function for factorial
int factorial(int n){
	 if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

//function fur inputing 
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}

//function to ask user if he want to continure using program
void Tocontinue(){
	int num=0;
	char ch='\0';
	input(&num);
	cout<<"Factorial of "<<num<<" = "<<factorial(num);
	cout<<"\n Do you want to continue(y/n): ";
	cin>>ch;
	if(ch=='y'){
		Tocontinue();
	}	
	else if(ch=='n'){
		exit(0);
	}
}