#include <iostream.h>
#include <conio.h>

void readA(int arr[10][10],int m,int n);
void readB(int brr[10][10],int p,int q);
void printA(int arr[10][10],int m,int n);
void printB(int brr[10][10],int p,int q);
void prodAB(int arr[10][10],int brr[10][10],int m,int n,int p,int q);

void main()
{
	clrscr();
	int arr[10][10];
	int brr[10][10];
	int m,n,p,q;
	cout<<"Enter the row limit for matrix A: ";
	cin>>m;
	cout<<"Enter the column limit for the matrix A: ";
	cin>>n;
	cout<<"Enter the row limit for the matrix B: ";
	cin>>p;
	cout<<"Enter the column limit for the matrix B: ";
	cin>>q;
	if(n!=p)
	{
		cout<<"Multiplication is not possible." ;

	}
	else
	{
		cout<<"Enter the elements for matrix A: ";
		readA(arr, m,n);
		cout<<"Printing matrix A: ";
		printA(arr,m,n);
		cout<<"Enter the elements of matrix B: ";
		readB(brr,p,q);
		cout<<"\n Printing matrix B: ";
		printB(brr,p,q);
		cout<<"\n The sum of the matrix A and B is: ";
		prodAB(arr,brr,m,n,p,q);
	}
	getch();
}
void readA(int arr[10][10], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter element A"<<i+1<<j+1<<" : ";
			cin>>arr[i][j];
		}
	}
}
void readB(int brr[10][10],int p,int q)
{
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout<<"Enter element B"<<i+1<<j+1<<" : ";
			cin>>brr[i][j];
		}
	}
}
void printA(int arr[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void printB(int brr[10][10],int p,int q)
{
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout<<brr[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void prodAB(int arr[10][10],int brr[10][10],int m,int n,int p, int q)
{
	int crr[10][10];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			for(int k=0;k<n;k++)

			{
				crr[i][j] += arr[i][k]*brr[k][j];
			}
		}
		cout<<crr[i][j]<<" ";
	}
}