#include<iostream.h>
#include<conio.h>
#include<math.h>

int armstrong(int n,int length){

	if(n==0){
		return 0;
	}
	else{
	    return pow((n%10),length)+armstrong(n/10,length);
	}
}
void main(){
	clrscr();
	int num;
	cout<<"Enter the number who you want to check as armstrong: ";
	cin>>num;
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
	getch();
}