#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void input(int *start,int *end,int *ch){
	cout<<"Enter the starting number in range: ";
	while(!(cin>>*start)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
	cout<<"Enter the ending number in range: ";
	while(!(cin>>*end)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
	cout<<"\nChoose what you want to do: \n1)Sum of Odd numbers\n2)Sum of even numbers\nYour Choice:";
	while(!(cin>>*ch)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
int Sum_of_even_numbers(int str,int end){
	int sum=0;
	for(int i=str; i<=end; i++){
		if(i%2==0){
			sum+=i;
		}
	}
	return sum;
}
int Sum_of_Odd_numbers(int str,int end){
	int sum=0;
	for(int i=str; i<=end; i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	return sum;
}
void Tocontinue(){
	char c='\0';
	int start=0,end=0,ch=0;
	input(&start,&end,&ch);
	switch(ch){
	case 1: cout<<"The sum of odd numbers in Range is: "<<Sum_of_Odd_numbers(start,end);
			break;
	case 2: cout<<"The sum of even numbers in Range is: "<<Sum_of_even_numbers(start,end);
			break;
	default:cout<<"Wrong Choice Entered!!";
			Tocontinue();
			 break;
	}
	cout<<"\n Do you want to continue(y/n): ";
	cin>>c;
	if(c=='y'){
		Tocontinue();
	}
	else if(c=='n'){
		exit(0);
	}
}
void main(){
	clrscr();
	Tocontinue();
	getch();
}