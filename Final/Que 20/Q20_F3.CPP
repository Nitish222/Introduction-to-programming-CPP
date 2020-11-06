	
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void AboveBelowMainDiagonal(int A[10][10],int m,int n);
void readA(int A[10][10],int m,int n);
void printA(int A[10][10],int m,int n);
void Tocontinue();
void input(int *num);

void main(){
	clrscr();
	int m=0,n=0,A[10][10];

	cout<<"\nEnter the row limit for matrix A: ";
	cin>>m;
	cout<<"\nEnter the column limit for the matrix A: ";
	cin>>n;

	int** A = new int*[m];
	for(int i = 0; i < m; ++i){
	A[i] = new int[n];
	}
	
	cout<<"\nEnter the elements for matrix A: \n";
	readA(A, m,n);
	cout<<"\nPrinting matrix A: \n";
	printA(A,m,n);

	AboveBelowMainDiagonal(A,m,n);

	getch();
}

void Tocontinue(){
	int A[10][10];
	int m=0,n=0;
	char ch='\0';
	cout<<"\nEnter the row limit for matrix A: ";
	input(&m);
	cout<<"\nEnter the column limit for the matrix A: ";
	input(&n);

	if(m>10||n>10){
		cout<<"Exceded array size, Please enter size below 10!!";
	}
	else{
	cout<<"\nEnter the elements for matrix A: \n";
	readA(A,m,n);
	cout<<"\nPrinting matrix A: \n";
	printA(A,m,n);
	AboveBelowMainDiagonal(A,m,n);
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














