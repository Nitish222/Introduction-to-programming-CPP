#include <iostream.h>
#include <conio.h>

int prime(int x);

void main()
{
	clrscr();
	int a = 0;
	cout<<"Enter a positive integer: ";
	cin>>a;
	if(prime(a) == 0){
	 cout<<a<<" is a prime number.";
	}
	else{
	cout<<a<<" is not a prime number.";
	}
	getch();
}
int prime(int x)
{
	int i = 0;
	for (i = 2; i <= x/ 2; ++i) {
	 if (x % i == 0) {
	    return 1;
	 }
    }
	return 0;

}