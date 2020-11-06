
#include<iostream.h>
#include<conio.h>
int sum_of_digit(int n){  
    if (n == 0)  
    return 0;  
    return (n % 10 + sum_of_digit(n / 10));  
}
  
void main(){
	clrscr();
	int num;
	cout<<"\n\nEnter the number whose sum of digit you want to find: ";
	cin>>num;
	cout<<"\nThe sum of digits of "<<num<<" is "<<sum_of_digit(num);
	getch();
}