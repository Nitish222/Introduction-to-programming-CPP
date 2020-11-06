#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void input(int *num1,int *num2){
	cout<<"\nEnter First number: ";
	while(!(cin>>*num1)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
	cout<<"\nEnter Second number: ";
	while(!(cin>>*num2)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
int sum(int x,int y){
	return x+y;
}
void Tocontinue(){
	int num1=0,num2=0;
	char ch='\0';
	input(&num1,&num2);
	cout<<"\nThe sum of "<<num1<<" + "<<num2<<" = "<<sum(num1,num2);
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