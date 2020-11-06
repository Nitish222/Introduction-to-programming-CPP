#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

int fact(int num); //function prototype for factorial
void Tocontinue();
void input(int *num);

void main()
{
	clrscr();
	Tocontinue();
	getch();
}
//function definition for factorial
int fact(int *num)
{
	//factorial with loop
	int f = 1;
    while ((*num) > 1) {
	   f *= (*num);
	   --(*num);
    }
    return f;
}
void Tocontinue(){

    //declared variable for array and size
	int num=0;
	char ch='\0';
	//taking user input for array size
	cout<<"Enter a number to get factorial: ";
	input(&num);
	cout<<"\nThe factorial of "<<num;
	cout<<" is: "<<fact(&num);

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
