#include <iostream.h>
#include <conio.h>

void readA(int arry[10][10],int m,int n);
void readB(int barry[10][10],int p,int q);
void printA(int arry[10][10],int m,int n);
void printB(int barry[10][10],int p,int q);
void diffAB(int arry[10][10],int barry[10][10],int m,int n);

void main()
{
	clrscr();
	int A[10][10];
	int B[10][10];
	int m,n,p,q;
	cout<<"\nEnter the row limit for matrix A: ";
	cin>>m;
	cout<<"\nEnter the column limit for the matrix A: ";
	cin>>n;
	cout<<"\nEnter the row limit for the matrix B: ";
	cin>>p;
	cout<<"\nEnter the column limit for the matrix B: ";
	cin>>q;
	if((m!=p)&&(n!=q))
	{
		cout<<"Addition is not possible." ;

	}
	else
	{
		cout<<"\nEnter the elements for matrix A: \n";
		readA(A, m,n);
		cout<<"\nPrinting matrix A: \n";
		printA(A,m,n);
		cout<<"\nEnter the elements of matrix B: \n";
		readB(B,p,q);
		cout<<"\n Printing matrix B: \n";
		printB(B,p,q);
		cout<<"\n The difference of the matrix A and B is: \n";
		diffAB(A,B,m,n);
	}
	getch();
}
void readA(int arry[10][10], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter element A"<<i+1<<j+1<<" : ";
			cin>>arry[i][j];
		}
	}
}
void readB(int barry[10][10],int p,int q)
{
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout<<"Enter element B"<<i+1<<j+1<<" : ";
			cin>>barry[i][j];
		}
	}
}
void printA(int arry[10][10],int m,int n)
{
	for(int i=0; i<m; i++){
		cout<<" | ";
		for(int j = 0; j <n; j++)
		{
			cout <<arry[i][j] <<" | ";
		}
		cout<<"\n";
	}
}
void printB(int barry[10][10],int p,int q)
{
	for(int i=0;i<p;i++)
	{
		cout<<" | ";
		for(int j=0;j<q;j++)
		{
			cout<<barry[i][j]<<" | ";
		}
		cout<<"\n";
	}
}
void diffAB(int arry[10][10],int barry[10][10],int m,int n)
{
	int crr[10][10];
	for(int i=0;i<m;i++)
	{
		cout<<" | ";
		for(int j=0;j<n;j++)
		{
			crr[i][j] = arry[i][j] - barry[i][j];
			cout<<crr[i][j]<<" | ";
		}
		cout<<"\n";
	}
}
