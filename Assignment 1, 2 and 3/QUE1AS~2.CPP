#include<iostream.h>
#include<conio.h>

int find_max(int x,int y){
  	if(x>y){
		return x;
  	}
  	else{
		return y;
  	}
}
void main(){
	clrscr();
	//****** Initialized the variables ****//
	int num1=0,num2=0;

	//******* Inputing the numbers *******//
	cout<<"Enter First Number";
	cin>>num1;
	cout<<"Enter Second Number";
	cin>>num2;

	//******* Check if the numbers are not equal***//
	if(num1!=num2){
		int max = find_max(num1,num2);
		cout<<"\n The maximum among the numbers is: "<<max;
	}
	else{
		cout<<"The number entered are equal, Pls enter different numbers";
	}
	getch();
}
