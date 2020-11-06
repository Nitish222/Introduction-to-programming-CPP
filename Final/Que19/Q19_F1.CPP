
#include <iostream.h>
#include <conio.h>


void diagonalSum(int A[10][10],int m,int n);
void printDiagonal(int A[10][10],int m,int n);
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

	printDiagonal(A,m,n);
	diagonalSum(A,m,n);

	getch();
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