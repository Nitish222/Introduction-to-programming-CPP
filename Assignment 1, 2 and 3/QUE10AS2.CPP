#include<iostream.h>
#include<conio.h>
int Pallindrome(int n){
	int rev=0,digit=0,Onum=0;
	Onum=n;
	do
	{
	    digit = n % 10;
	    rev = (rev * 10) + digit;
	    n = n / 10;
	} while (n!= 0);
	if(Onum==rev){
		return 1;
	}
	else{
		return 0;
	}
}

void main(){
	clrscr();
	int num;
	cout<<"Enter the number you want to check as Pallindrome: ";
	cin>>num;
	if(Pallindrome(num)==1){
		cout<<"Number is Pallindrome";
	}
	else{
		cout<<"Number is not Pallindrome";
	}
	getch();
}