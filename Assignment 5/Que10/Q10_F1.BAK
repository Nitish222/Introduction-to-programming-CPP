
#include <iostream.h>
#include <conio.h>
//Function prototype
void readA(int arry[10][10],int R1,int C1);			
void readB(int barry[10][10],int R2,int C2);
void printA(int arry[10][10],int R1,int C1);
void printB(int barry[10][10],int R2,int C2);
void prodAB(int arry[10][10],int barry[10][10],int R1,int R2,int C2);

void main()
{
	clrscr();
	int arry[10][10],barry[10][10],R1=0,C1=0,R2=0,C2=0;
	cout<<"Enter the row limit for matrix A (R1): ";
	cin>>R1;
	cout<<"Enter the column limit for the matrix A(C1): ";
	cin>>C1;
	cout<<"Enter the row limit for the matrix B(R2): ";
	cin>>R2;
	cout<<"Enter the column limit for the matrix B(C2): ";
	cin>>C2;
	if(C1!=R2)
	{
		cout<<"Multiplication is not possible." ;

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
		prodAB(arry,barry,R1,R2,C2);
	}
	getch();
}
void readA(int arry[10][10], int R1, int C1)			//Entering array A
{
	for(int i=0;i<R1;i++)
	{
		for(int j=0;j<C1;j++)
		{
			cout<<"Enter element A"<<i+1<<j+1<<" : ";
			cin>>arry[i][j];
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
			cin>>barry[i][j];
		}
	}
}
void printA(int arry[10][10],int R1,int C1)			//to Print array A
{
	for(int i=0;i<R1;i++)
	{
		for(int j=0;j<C1;j++)
		{
			cout<<arry[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
void printB(int barry[10][10],int R2,int C2)			//to print array B
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
void prodAB(int arry[10][10],int barry[10][10],int R1,int R2, int C2)		//product of array A andB
{
	int crr[10][10];
	for(int i=0;i<R1;i++)
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