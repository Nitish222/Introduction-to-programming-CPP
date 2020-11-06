#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void input(int *num){
	cout<<"Enter the number who you want to check as armstrong: ";
	while(!(cin>>*num)){
	cout<<"Please Enter a number:";
	cin.clear(); // clear the error flag
	cin.ignore(1000, '\n'); // ignore until the next newline
	}
}
int armstrong(int n,int length){
	if(n==0){
		return 0;
	}
	else{
	    return pow((n%10),length)+armstrong(n/10,length);
	}
}
void Tocontinue(){
	char ch='\0';
	int num=0;
	input(&num);
	int temp=num,length=0;
	while(temp!=0){
		length++;
		temp = temp/10;
	}
	int result = armstrong(num,length);
	if(num==result)
	{
		cout<<"The Number is armstrong!!";
	}
	else
	{
		cout<<"The Number is not armstrong!!";
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