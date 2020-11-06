#include <iostream.h>
#include <conio.h>

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
void main(){
	clrscr();
	int start,end,ch;
	cout<<"Enter the starting number in range: ";
	cin>>start;
	cout<<"Enter the ending number in range: ";
	cin>>end;
	cout<<"\nChoose what you want to do: \n1)Sum of Odd numbers\n2)Sum of even numbers\nYour Choice:";
	cin>>ch;
	switch(ch){
	case 1: cout<<"The sum of odd numbers in Range is: "<<Sum_of_Odd_numbers(start,end);
			break;
	case 2: cout<<"The sum of even numbers in Range is: "<<Sum_of_even_numbers(start,end);
			break;
	default: cout<<"Wrong Choice Entered!!";
			 break;
	}
	getch();
}