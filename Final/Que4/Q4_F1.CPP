#include <iostream.h>
#include <conio.h>
void check(int n);		//function prototype
void main()
{
	clrscr();
	int num=0;
	cout<<"Enter the integer number : ";
	cin>>num;
	check(num);
	getch();
}
void check (int num)		//function definition
{
	int f=0;
	for(int i=2; i<num; i++)		//checking for prime number
	{
		if(num%i==0)
		{
			f=1;

		}
	}
	if(num%2==0)		//checking for even and prime number
	{

		if(f==0)
		{
			cout<<"It is a even prime number.\n";

		}
		else{
		cout<<"It is an even number.\n";
		}
	}
	else				//checking for odd and prime number
	{

		if(f==0)
		{
			cout<<"It is a odd prime number.\n";
			break;
		}
		else{
		cout<<"It is a odd number.\n";
		}
	}
}