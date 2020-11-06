#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void input(int *day){
	cout<<"Enter the number of the day: ";
	while(!(cin>>*day)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
void print_day(int n){
	switch(n){
		case 1: cout<<"It is Monday.";
				break;
		case 2: cout<<"It is Tuesday.";
				break;
		case 3: cout<<"It is Wednesday.";
				break;
		case 4: cout<<"It is Thursday.";
				break;
		case 5: cout<<"It is Friday.";
				break;
		case 6: cout<<"It is Saturday.";
				break;
		case 7: cout<<"It is Sunday.";
				break;
	}
}
void Tocontinue(){
	char ch='\0';
	int day=0;
	input(&day);
	if(day<1||day>7){
		cout<<"Error: please enter number between 1 and 7";
		Tocontinue();
	}
	else{
		print_day(day);
	}
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