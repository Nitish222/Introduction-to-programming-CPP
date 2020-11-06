#include <iostream.h>
#include <conio.h>

int prime(int *num);  //funciton prototype for prime
void input(int *num);
void Tocontinue();

void main()
{
	clrscr();
	Tocontinue();
	getch();
}
int prime(int *num)  //function definition for prime
{
	int i = 0;
	for (i = 2; i <= (*num)/ 2; ++i) {
	 if ((*num) % i == 0) {
	    return 1;
	 }
    }
	return 0;
}

void Tocontinue(){

    //declared variable for array and size
	int num=0;
	char ch='\0';
	//taking user input for array size
	cout<<"Enter a positive integer: ";
	input(&num);
	
	//function call to check if number is prime if 0, 1 if not
	if(prime(&num)==1){   
	 cout<<" is a prime number.";
	}
	else{
	cout<<" is not a prime number.";
	}
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
