# include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void readA (int A[20],int m);
void printA(int A[20], int m);
void readB(int B[20], int n);
void printB(int B[20], int n);
void resultantC(int c[40], int o);
void Tocontinue();
void input(int *num);
void main()
{
	clrscr();
	Tocontinue();
	getch();
}
void readA(int A[20],int m)		//reading and sorting array 1
{
	cout<<"Please enter the elements of array A:"<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<"Enter element A"<<i+1<<" : ";
			input(&A[i]);
	}
	int min=0,a=0,temp=0;
	for(i=0;i<m-1;i++)
	{
		min=i;
		for(a=i+1;a<m;a++)
		{
			if(A[a]>A[min])
			{
				min=a;
			}
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
}
void printA(int A[20], int m)		//printing array 1
{
	for(int i=0; i<m; i++){
			cout <<A[i]<<" | ";
	}

}
void readB(int B[20], int n)			//reading and sorting array 2
{
	cout<<"Please enter the elements of array B:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element B"<<i+1<<" : ";
		input(&B[i]);
	}
	int min=0,a=0,temp=0;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(a=i+1;a<n;a++)
		{
			if(B[a]>B[min])
			{
				min=a;
			}
		}
		temp=B[i];
		B[i]=B[min];
		B[min]=temp;
	}
}
void printB(int B[20], int p)			//printing array 1
{
	for(int i=0;i<p;i++)
	{
			cout<<B[i]<<" | ";
	}
}
void resultantC(int C[40], int k)			//printing resultant matrix
{
	int min=0,temp=0;
	for(int i=0;i<k-1;i++)
	{
		min=i;
		for(int b=i+1;b<k;b++)
		{
			if(C[b]<C[min])
			{
				min=b;
			}
		}
		temp=C[i];
		C[i]=C[min];
		C[min]=temp;
	}
	cout<<"\nThe elements of array C are: ";
		
		for(int x=0; x<k; x++){
			cout<<C[x];
		}
}
void Tocontinue(){

    //initializing and declaring variable, array
    int A[20],B[20],C[40];
	int m=0,n=0,k=0;
	char ch='\0';
	cout<<"\nPlease enter the size of the array A: \n";
	input(&m);
	cout<<"\nPlease enter the size of the array B : \n";
	input(&n);
	readA(A, m);
	readB(B, n);
	cout<<"\nthe array A is: \n";
	printA(A, m);
	cout<<"\nthe array B is: \n";
	printB(B, n);
	for(int i=0;i<m;i++)
	{
		C[i]=A[i];
	}
	int a=0;
	for(int b=m;b<(m+n);b++)
	{
		C[b]=B[a] ;
		a++ ;
	}
    resultantC(C,k);

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
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}