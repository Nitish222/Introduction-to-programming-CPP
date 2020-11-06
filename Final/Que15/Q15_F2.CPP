#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void readA(int **A,int m,int n);
void readB(int **B,int p,int q);
void printA(int **A,int m,int n);
void printB(int **B,int p,int q);
int check_equality(int **A,int **B,int m,int n);
void Tocontinue();
void input(int *num);

void main()
{
	clrscr();
	Tocontinue();
	getch();
}

void Tocontinue(){
	int m=0,n=0,p=0,q=0;
	char ch='\0';

	cout<<"\nEnter the row limit for matrix A: ";
	input(&m);
	cout<<"\nEnter the column limit for the matrix A: ";
	input(&n);

	cout<<"\nEnter the row limit for the matrix B: ";
	input(&p);
	cout<<"\nEnter the column limit for the matrix B: ";
	input(&q);

	//dynamically allocating 2D array A
	int** A = new int*[m];
	for(int i = 0; i < m; ++i){
	A[i] = new int[n];
	}
	int** B = new int*[p];
	for(i = 0; i < q; ++i){
	B[i] = new int[q];
	}
	if((m!=p)&&(n!=q))
	{
		cout<<"matrices cannot be equal!!" ;

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

		if (check_equality(A,B,m,n) == 1)
		cout<<"\nThe matrices A and B are equal!!\n";
		else
		cout<<"\nThe matrices A and B are not equal!!\n";
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
	for (i = 0; i < p; i++) {
	delete [] B[i];
	}
	delete [] B;  //arraywon't exist anymore after this
	B = 0;
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
void readB(int **B,int p,int q)
{
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
		{
			cout<<"Enter element B"<<i+1<<j+1<<" : ";
			cin>>B[i][j];
		}
	}
}
void printA(int **A,int m,int n)
{
	for(int i=0; i<m; i++){
		cout<<" | ";
		for(int j = 0; j <n; j++)
		{
			cout <<A[i][j] <<" | ";
		}
		cout<<"\n";
	}
}
void printB(int **B,int p,int q)
{
	for(int i=0;i<p;i++)
	{
		cout<<" | ";
		for(int j=0;j<q;j++)
		{
			cout<<B[i][j]<<" | ";
		}
		cout<<"\n";
	}
}
int check_equality(int **A,int **B,int m,int n)
{
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (A[i][j]==B[i][j]){ // If the values are equal
				return 1;
			}
		}
	}
	return 0;
}

