#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

//function to check even or odd
void evenodd(int n)
{
	//checking the even odd condition
	if ( n % 2 == 0)
	   cout<<"Number is even!!";  //saves us lines of code by printing in function
    else
	   cout<<"Number is odd!!";
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
void Tocontinue(){
    int num=0;
    char ch='\0';
    cout<<"Enter a Number: ";
    input(&num);
    evenodd(num);
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'){
        Tocontinue();
    }   
    else if(ch=='n'){
        exit(0);
    }
}

void main()
{
	clrscr();
    Tocontinue();
    getch();
}
