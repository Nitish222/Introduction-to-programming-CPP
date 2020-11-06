#include<iostream.h>
#include<conio.h>
void print_day(int n){
	switch(n){
		case 1: cout<<"It is Monday.";
				break;
		case 2: cout<<"It is Tuesday.";
				break;
		case 3: cout<<"It is Wednesday.";
				break;
		case 4: cout<<"It is Thursday.";
				break;
		case 5: cout<<"It is Friday.";
				break;
		case 6: cout<<"It is Saturday.";
				break;
		case 7: cout<<"It is Sunday.";
				break;
	}
}

void main(){
	clrscr();
	int day;
	cout<<"Enter the number of the day: ";
	cin>>day;
	if(day<1||day>7){
		cout<<"Error: please enter number between 1 and 7";
	}
	else{
	print_day(day);
	}
	getch();
}