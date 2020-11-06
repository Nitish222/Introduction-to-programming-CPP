#include <iostream.h>
#include <conio.h>

int fact(int num); //function prototype for factorial

void main()
{
	clrscr();

	int num=0;  	//initialized variables

	cout<<"Enter a number to get fibbonacci series: ";
	cin>>num;
	cout<<"\nThe fibbonacci series is: "<<fib(num);

	getch();
}
//function definition for fact
int fib(int num)
{
	int num1 = 0, num2 = 1, temp; 
    if( n == 0) 
        return 0; 
    for(int i = 2; i <= n; i++) 
    { 
       temp = num1 + num2; 
       num1 = num2; 
       num2 = temp; 
    } 
    return num2; 
}
