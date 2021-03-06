#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void readA(int **A,int m,int n);
void printA(int **A,int m,int n);
void rowsum(int **A,int m,int n);
void colsum(int **A,int m,int n);
void Tocontinue();
void input(int *num);
void main()
{
	clrscr();
	Tocontinue();
	getch();
}
void Tocontinue(){
	int m=0,n=0;
	char ch='\0';

	cout<<"\nEnter the row limit for matrix A: ";
	input(&m);
	cout<<"\nEnter the column limit for the matrix A: ";
	input(&n);

	//dynamically allocating 2D array A
	int** A = new int*[m];
	for(int i = 0; i < m; ++i){
	A[i] = new int[n];
	}

	if(m>10||n>10){
		cout<<"Exceded array size, Please enter size below 10!!";
	}
	else{
	cout<<"\nEnter the elements for matrix A: \n";
	readA(A,m,n);
	cout<<"\nPrinting matrix A: \n";
	printA(A,m,n);
	rowsum(A,m,n);
	colsum(A,m,n);
	}
	//ask user if he want to continue using program
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
	for (int i = 0; i < m; i++) {
	delete [] A[i];
	}
	delete [] A;  //arraywon't exist anymore after this
	A = 0;
	Tocontinue();
    }
    else if(ch=='n'||ch=='N'){
	   exit(0);
    }
}
void readA(int **A, int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter element A"<<i+1<<j+1<<" : ";
			cin>>A[i][j];
		}
	}
}

void printA(int **A,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		cout<<" | ";
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<" | ";
		}
		cout<<"\n";
	}
}

void rowsum(int **A,int m,int n)
{
	int rowSum=0;
	for(int i=0;i<m;i++)
	{
		rowSum=0;
		for(int j=0;j<n;j++)
		{
			rowSum += A[i][j];
		}
		cout<<"\nSum of row "<<i+1<<" is "<<rowSum<<"\n";
	}
}
void colsum(int **A, int m,int n)
{
	int colSum=0;
	for(int j=0;j<n;j++)
	{
		colSum=0;
		for(int i=0;i<m;i++)
		{
			colSum += A[i][j];
		}
		cout<<"\nSum of column "<<j+1<<" is "<<colSum<<"\n";
	}
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}