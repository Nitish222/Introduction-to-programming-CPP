#include<iostream.h>
#include<conio.h>

int Sum_of_natural_numbers(int str,int end){
	if(end>str){
	return end+Sum_of_natural_numbers(str,end-1);
	}
	else{
		return 1;
	}
}
void main(){
	clrscr();
	int start,end;
	cout<<"Enter the start of range to find the Sum of natural numbers: ";
	cin>>start;
	cout<<"Enter the end of range to find the Sum of natural numbers: ";
	cin>>end;
	cout<<"The sum of natural numbers in range "<<start<<" and "<<end<<" = "<<Sum_of_natural_numbers(start,end);
	getch();
}

