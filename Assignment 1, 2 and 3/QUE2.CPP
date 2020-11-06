#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
char c='\0';
void ToContinue();
void input(int *num1, int *num2, int *ch){
	cout<<"\n\nEnter First Number";
	while(!(cin>>*num1)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
	cout<<"\nEnter Second Number:";
	while(!(cin>>*num2)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
	cout<<"\nChoose what you want to do: \n1)Addition\n2)Division\n3)Product\n4)division \nYour Choice:";
	while(!(cin>>*ch)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
void continueCondition(){
	cout<<"\nDo you want to continue(y/n): ";
	cin>>c;
	if(c=='y'){
		ToContinue();
	}
	else if(c=='n'){
	   exit(0);
	}
}
int addition(int x,int y){
	return x+y;

}
int difference(int x, int y){
	return x-y;
}
int product(int x, int y){
	return x*y;
}
double division(int x, int y){
	return double(x)/double(y);
}
void CaseFunction(int num1,int num2,int ch){
	switch(ch){
	case 1: cout<<num1<<" + "<<num2<<" = "<<addition(num1,num2); continueCondition(); break;
	case 2: cout<<num1<<" - "<<num2<<" = "<<difference(num1,num2); continueCondition(); break;
	case 3: cout<<num1<<" * "<<num2<<" = "<<product(num1,num2); continueCondition(); break;
	case 4: cout<<num1<<" / "<<num2<<" = "<<division(num1,num2); continueCondition(); break;
	default: cout<<"You entered a wrong choice:";CaseFunction(num1,num2,ch); break;
	}
}
void ToContinue(){
	int num1=0,num2=0,ch=0;
	input(&num1,&num2,&ch);
	CaseFunction(num1,num2,ch);
}

void main(){
	clrscr();
	ToContinue();
	getch();
}