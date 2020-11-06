
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//assignned a static size of 12 because number of months are constant
const int n_mon = 12;
struct sales
{    
    int months[n_mon];
};

void input(int *num);
void read(sales salesman[],int sm);
void print(sales salesman[],int sm);
void Tocontinue();

void main(){
	clrscr();
  Tocontinue();
	getch();
}

void read(sales salesman[],int sm)
{
    for(int i=0;i<sm;i++)
    {
	   cout<<"\n\nEnter the sales of salesman with id "<<i<<" : ";
	   
	   for(int j=0; j<n_mon; ++j){
	   cout<<"\n\n Enter sales for"<<j+1<<"th month: ";
	   cin>>salesman[i].months[j];
    }
    }
}
void print(sales *salesman,int sm)
{   int i=0;
    cout<<"\n         -------- Months --------- \n";
    cout<<"             ";
    for(i=0;i<12;i++)
    {
    cout<<i+1<<" | ";

    }
  for(i=0; i<sm; i++){
	cout<<"\n\nsalesman[" <<i<< "]: ";
	for(int j = 0; j <n_mon; j++)
	{
	   cout <<salesman[i].months[j] <<" | ";
	}
	}
}

void Tocontinue(){
    //initializing and declaring variable,
    int sm=0;
    char ch='\0';
    //now we can select the number of slaes man
    cout<<"\n\nEnter the number of salesman: ";
    input(&sm);

    //our dynamic array of structures, here we are passing sm as the size of our array salesman
    sales *salesman = new sales[sm];

    //reading and printing array
    read(salesman,sm);
    print(salesman,sm);

    //ask user if he want to continue using program
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
    Tocontinue();
    }
    else if(ch=='n'||ch=='N'){
    exit(0);
    }
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
