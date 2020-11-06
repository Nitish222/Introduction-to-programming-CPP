	
#include <iostream.h>
#include <conio.h>


void AboveBelowMainDiagonal(int A[10][10],int m,int n);
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

	AboveBelowMainDiagonal(A,m,n);

	getch();
}

void AboveBelowMainDiagonal(int A[10][10],int m,int n)
{	
	int Asum=0,Bsum=0;
	for(int i=0;i<m;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(j>i){
				Asum+=A[i][j];
			}
			else{
				if(i>j)
				{
					Bsum+=A[i][j];
				}
			}
		}
	}
	cout<<"\nSum of elements above the diagonal: "<<Asum;
	cout<<"\nSum of elements below the diagonal: "<<Bsum;
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














