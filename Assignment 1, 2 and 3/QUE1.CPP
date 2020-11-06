#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int find_max(int x,int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}
void input(int *num1, int *num2){
	cout<<"\n\nEnter First Number";
	while(!(cin>>*num1)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
	cout<<"\nEnter Second Number";
	while(!(cin>>*num2)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
void Tocontinue(){
	char ch='\0';
	//****** Initialized the variables ****//
	int num1=0, num2=0;
	//******* Inputing the numbers *******//
	input(&num1,&num2);
	//******* Check if the numbers are not equal***//
	if(num1!=num2){
		int max = find_max(num1,num2);
		cout<<"\n The maximum among the numbers is: "<<max;
	}
	else{
		cout<<"\n The number entered are equal, Pls enter different numbers";
		Tocontinue();
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
