#include <iostream.h>
#include <conio.h>

int fact(int num); //function prototype for factorial

void main()
{
	clrscr();

	int num=0;  	//initialized variables

	cout<<"Enter a number to get factorial: ";
	cin>>num;
	cout<<"\nThe factorial of "<<num<<" is: "<<fact(num);

	getch();
}
//function definition for fact
int fact(int num)
{
	//Base case for recursive function
	if(num>1){
		return num*fact(num-1);
	}
	else{
		return 1;
	}

}