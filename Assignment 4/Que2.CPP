#include <iostream.h>
#include <conio.h>

void factorial(int num, int &fact);  //funciton prototype for factorial

void main()
{
	clrscr();
	int num = 0, fact=1;  //initialized variables
	cout<<"Enter a number to get factorial: ";
	cin>>num;			  //input number
	factorial(num,fact);  //function call
	cout<<"The factorial of "<<num<<" is :"<<fact;
	getch();
}
void factorial(int num, int &fact)
{
	for(int i = 1;i<=num;i++)
	{
		fact = fact * i;
	}
}