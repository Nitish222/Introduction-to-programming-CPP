
#include <iostream.h>
#include <conio.h>


void upperhalf(int A[10][10],int m,int n);
void lowerhalf(int A[10][10],int m,int n);
void readA(int A[10][10],int m,int n);
void printA(int A[10][10],int m,int n);
void main(){
	clrscr();
	int m=0,n=0,A[10][10];

	cout<<"\nEnter the row limit for matrix A: ";
	cin>>m;
	cout<<"\nEnter the column limit for the matrix A: ";
	cin>>n;

	cout<<"\nEnter the elements for matrix A: \n";
	readA(A, m,n);
	cout<<"\nPrinting matrix A: \n";
	printA(A,m,n);

	cout<<"\nUpper half of the Array is :\n";
	upperhalf(A,m,n);
	cout<<"\nLower half of the Array is :\n";
	lowerhalf(A,m,n);

	getch();
}

void upperhalf(int A[10][10],int m,int n)
{
	for(int i=0;i<m;++i)
		{
			for(int j=0;j<n;++j)
			{
				if(i<j)
					cout<<A[i][j]<<" | ";
				else
					cout<<"    ";
		}
		cout<<"\n";
	}
}
void lowerhalf(int A[10][10],int m,int n)
{
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(j<i)
				cout<<A[i][j]<<" | ";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
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

void printA(int arry[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		cout<<" | ";
		for(int j=0;j<n;j++)
		{
			cout<<arry[i][j]<<" | ";
		}
		cout<<"\n";
	}
}