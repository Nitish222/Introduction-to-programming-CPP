#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void input(int *start, int *end){
	cout<<"Enter the start of range to find the Sum of natural numbers: ";
	while(!(cin>>*start)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
	cout<<"Enter the end of range to find the Sum of natural numbers: ";
	while(!(cin>>*end)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
int Sum_of_natural_numbers(int str,int end){
	if(end>str){
	return end+Sum_of_natural_numbers(str,end-1);
	}
	else{
		return 1;
	}
}
void Tocontinue(){
	int start,end;
	char ch='\0';
	input(&start,&end);
	cout<<"The sum of natural numbers in range "<<start<<" and "<<end<<" = "<<Sum_of_natural_numbers(start,end);
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
	cin>>end;
	getch();
}

