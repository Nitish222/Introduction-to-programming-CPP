#include <iostream.h>
#include <conio.h>
#include<stdlib.h>

//prototype for all functions
int prime(int num);  
void Tocontinue();
void input(int *num);

void main()
{
	clrscr();
	Tocontinue();
	getch();
}

int prime(int num)  //function definition for prime
{
	int i = 0;
	for (i = 2; i <= num/ 2; ++i) {
	 if (num % i == 0) {
	    return 1;
	 }
    }
	return 0;

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
	int num = 0;  //initialized variables
	char ch='\0';
	
	cout<<"Enter a positive integer: ";
	input(&num); //input number
	
	//function call to check if number is prime if 0, 1 if not
	if(prime(num) == 0){   
	 cout<<num<<" is a prime number.";
	}
	else{
	cout<<num<<" is not a prime number.";
	}
	
	cout<<"\n Do you want to continue(y/n): ";
	cin>>ch;
	if(ch=='y'){
		Tocontinue();
	}	
	else if(ch=='n'){
		exit(0);
	}
}