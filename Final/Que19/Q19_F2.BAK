
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void diagonalSum(int A[10][10],int m,int n);
void printDiagonal(int A[10][10],int m,int n);
void readA(int A[10][10],int m,int n);
void printA(int A[10][10],int m,int n);
void Tocontinue();
void input(int *num);
void main(){
	clrscr();
	Tocontinue();
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

	printDiagonal(A,m,n);
	diagonalSum(A,m,n);
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

void printDiagonal(int A[10][10],int m,int n)
{

	cout <<"\nPrincipal Diagonal: ";
	for (int i = 0; i < m; i++) {
	   for (int j = 0; j < n; j++) {
		  // Condition for principal diagonal
		  if (i == j)
			 cout << A[i][j] << " | ";
	   }
    }
    cout << "\n";

    cout << "Secondary Diagonal: ";

    for (i=0; i < m; i++) {
	   for (int j = 0; j < n; j++) {

		  // Condition for secondary diagonal
		  if ((i + j) == (n - 1))
			 cout << A[i][j] << " | ";
	   }
    }
    cout << "\n";
}
void diagonalSum(int A[10][10],int m,int n)
{
	int Psum=0,Ssum=0;
	for (int i = 0; i < m; i++) {
	   for (int j = 0; j < n; j++) {
		  // Condition for principal diagonal
		  if (i == j){
			 Psum+=A[i][j];
		}
	   }
    }
    cout <<"\nPrincipal Diagonal Sum: \n"<<Psum;
    for (i = 0; i < m; i++) {
	   for (int j = 0; j < n; j++) {

		  // Condition for secondary diagonal
		  if ((i + j) == (n - 1)){
			 Ssum+=A[i][j];
		  }
	   }
    }
    cout <<"\nSecondary Diagonal Sum: \n"<<Ssum;
}

void readA(int arry[10][10], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter element A"<<i+1<<j+1<<" : ";
			input(&arry[i][j]);
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
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}