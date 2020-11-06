#include<iostream.h>
#include<conio.h>
void right_half(int n)
{
	//for row
	for(int i = 1; i <= n; ++i)
    {
	//for coloumn and printing star
	   for(int j = 1; j <= i; ++j)
	   {
		  cout << "* ";
	   }
	   cout << "\n";
    }
}
void main()
{
	clrscr();
	int limit;
	cout<<"Enter the size of limit for pattern: ";
	cin>>limit;
	right_half(limit); //calling the function
	getch();
}