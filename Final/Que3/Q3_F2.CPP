#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
int fib(int num); //function prototype for factorial
void input(int *num);
void Tocontinue();

void main()
{
	clrscr();
	Tocontinue();
	getch();
}
//iterative function definition for fibonacci series
int fib(int num)
{
	int num1 = 0, num2 = 1, temp;
    if( num == 0)
	   return 0;
    for(int i = 2; i <= num; i++)
    {
	  temp = num1 + num2;
	  num1 = num2;
	  num2 = temp;
    }
    return num2;
}

void Tocontinue(){

    //initializing and declaring variable, array
    int num=0;
    char ch='\0';

    cout<<"\nEnter a number to get fibbonacci series: ";
	input(&num);
	cout<<"\nThe fibbonacci series is: "<<fib(num);

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