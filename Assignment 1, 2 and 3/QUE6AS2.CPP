#include<iostream.h>
#include<conio.h>
int sum(int x,int y){
	return x+y;
}
void main(){
	clrscr();
	int num1,num2,ch;
	cout<<"\nEnter First number: ";
	cin>>num1;
	cout<<"\nEnter Second number: ";
	cin>>num2;
	cout<<"\nThe sum of "<<num1<<" + "<<num2<<" = "<<sum(num1,num2);
	getch();
}