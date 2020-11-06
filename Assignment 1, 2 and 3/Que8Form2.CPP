
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void input(int *num){
	cout<<"\n\nEnter the number whose sum of digit you want to find: ";
	while(!(cin>>*num)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
int sum_of_digit(int n){  
    if (n == 0)  
    return 0;  
    return (n % 10 + sum_of_digit(n / 10));  
}
void Tocontinue(){
	char ch='\0';
	int num=0;
	input(&num);
	cout<<"\nThe sum of digits of "<<num<<" is "<<sum_of_digit(num);
	cout<<"\n Do you want to continue(y/n): ";
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