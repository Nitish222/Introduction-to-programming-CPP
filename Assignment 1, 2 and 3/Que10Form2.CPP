#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void input(int *num){
	cout<<"Enter the number you want to check as Pallindrome: ";
	while(!(cin>>*num)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
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
void Tocontinue(){
	char ch='\0';
	int num=0;
	input(&num);
	if(Pallindrome(num)==1){
		cout<<"Number is Pallindrome";
	}
	else{
		cout<<"Number is not Pallindrome";
	}
	cout<<"\n\nDo you want to continue(y/n): ";
	cin>>ch;
	if(ch=='y'){
		Tocontinue();
	}	
	else if(ch=='n'){
		exit(0);
	}
}
void main(){
	clrscr();
	Tocontinue();
	getch();
}