#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void readA(int **arry,int R1,int C1);
void readB(int **barry,int R2,int C2);
void printA(int **arry,int R1,int C1);
void printB(int **barry,int R2,int C2);
void diffAB(int **arry,int **barry,int R1,int C1,int C2);
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
	int R1=0,C1=0,R2=0,C2=0;
	char ch='\0';
	cout<<"Enter the row limit for matrix A (R1): ";
	input(&R1);
	cout<<"Enter the column limit for the matrix A(C1): ";
	input(&C1);
	cout<<"Enter the row limit for the matrix B(R2): ";
	input(&R2);
	cout<<"Enter the column limit for the matrix B(C2): ";
	input(&C2);
    //dynamically allocating 2D array A
	int** arry = new int*[R1];
	for(int i = 0; i < R1; ++i){
	arry[i] = new int[C1];
	}
	//dynamically allocating 2D array B
	int** barry = new int*[R2];
	for(int j = 0; j < R2; ++j){
	barry[j] = new int[C2];
	}

	if(R1!=R2||C1!=C2)
	{
		cout<<"Difference is not possible." ;

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
		cout<<"\n The product of the matrix A and B is: \n";
		diffAB(arry,barry,R1,C1,C2);
	}
    //ask user if he want to continue using program
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
	for (int i = 0; i < R1; i++) {
	delete [] arry[i];
	}
	delete [] arry;  //arraywon't exist anymore after this
	arry = 0;
	for (i = 0; i < R2; i++) {
	delete [] barry[i];
	}
	delete [] barry;  //arraywon't exist anymore after this
	barry = 0;
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
void readA(int **arry, int R1, int C1)			//Entering array A
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
void readB(int **barry,int R2,int C2)			//Entering array B
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
void printA(int **arry,int R1,int C1)
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
void printB(int **barry,int R2,int C2)
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
void diffAB(int **arry,int **barry,int R1,int R2, int C2)		//product of array A andB
{
	int** crr = new int*[R1];
	for(int i = 0; i < R1; ++i){
	crr[i] = new int[C2];
	}
	for(i=0;i<R1;i++)
	{
		for(int j=0;j<C2;j++)
		{
			crr[i][j] = 0;
			for(int k=0;k<R2;k++)
			{
				crr[i][j] += arry[i][k] * barry[k][j];
			}
		}
	}
	for(i=0;i<R1;i++)
	{
		for(int j=0;j<C2;j++)
			cout<<crr[i][j]<<" ";
		cout<<"\n";
	}
}
