#include <iostream.h>
#include <conio.h>

void initialize_print(int arr[5]); //function prototype for initialize print

void main()
{
	clrscr();

	int arr[5] = {5, 7, 6, 3, 2}; //initialized array

	initialize_print(arr); //function call
	getch();
}
//function for printing the array in following format
// position  0    1    2    3
// Elements  11 | 22 | 33 | 44
void initialize_print(int arr[5])  //function definition for initialize print
{
	cout<<"\n Position: ";
	for(int i=0;i<5;i++)
	{
		cout<<i<<"   ";
	}
	cout<<"\n Element:  ";
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" | ";
	}
}