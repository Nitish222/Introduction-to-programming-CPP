#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void readA(int arry[10][10],int R1,int C1);
void readB(int barry[10][10],int R2,int C2);
void printA(int arry[10][10],int R1,int C1);
void printB(int barry[10][10],int R2,int C2);
void diffAB(int arry[10][10],int barry[10][10],int R1,int C1);
void input(int *num);
void Tocontinue();

void main()
{
	clrscr();
	Tocontinue();
	getch();
}

void Tocontinue(){

    //declared and initialized the variables
	int arry[10][10],barry[10][10],R1=0,C1=0,R2=0,C2=0;
	char ch='\0';
	cout<<"Enter the row limit for matrix A (R1): ";
	input(&R1);
	cout<<"Enter the column limit for the matrix A(C1): ";
	input(&C1);
	cout<<"Enter the row limit for the matrix B(R2): ";
	input(&R2);
	cout<<"Enter the column limit for the matrix B(C2): ";
	input(&C2);
    //given user a error if he request the size larger than the initialized size of 10
    if(R1>10||R2>10||C1>10||C2>10){
		cout<<"!!invalid size entered please enter below 10!!";
	}
	else{
	if(R1!=R2||C1!=C2)
	{
		cout<<"difference is not possible." ;

	}
	else
	{
		cout<<"\nEnter the elements for matrix A: \n";
		readA(arry, R1,C1);
		cout<<"Printing matrix A: \n";
		printA(arry,R1,C1);
		cout<<"\nEnter the elements of matrix B: \n";
		readB(barry,R2,C2);
		cout<<"\n Printing matrix B: \n";
		printB(barry,R2,C2);
		cout<<"\n The difference of the matrix A and B is: \n";
		diffAB(arry,barry,R1,C1);
	}
	}
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
void readA(int arry[10][10], int R1, int C1)			//Entering array A
{
	for(int i=0;i<R1;i++)
	{
		for(int j=0;j<C1;j++)
		{
			cout<<"Enter element A"<<i+1<<j+1<<" : ";
			input(&arry[i][j]);
		}
	}
}
void readB(int barry[10][10],int R2,int C2)			//Entering array B
{
	for(int i=0;i<R2;i++)
	{
		for(int j=0;j<C2;j++)
		{
			cout<<"Enter element B"<<i+1<<j+1<<" : ";
			input(&barry[i][j]);
		}
	}
}
void printA(int arry[10][10],int R1,int C1)
{
	for(int i=0;i<R1;i++)
	{
		for(int j=0;j<C1;j++)
		{
			cout<<arry[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void printB(int barry[10][10],int R2,int C2)
{
	for(int i=0;i<R2;i++)
	{
		for(int j=0;j<C2;j++)
		{
			cout<<barry[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void diffAB(int arry[10][10],int barry[10][10],int R1,int C1)
{
	int crr[10][10];
	for(int i=0;i<R1;i++)
	{
		for(int j=0;j<C1;j++)
		{
			crr[i][j] = arry[i][j] - barry[i][j];
			cout<<crr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
