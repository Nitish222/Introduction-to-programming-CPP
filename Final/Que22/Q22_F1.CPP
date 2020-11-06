#include<iostream.h>
#include<conio.h>

void readch(char ch[50][50], int n);
void printch(char ch[50][50], int n);
void reverse(char ch[50][50], int n);

void main()
{
	clrscr();
	char ch[50][50];
	int a=0;
	cout<<"Enter the number of characters of the string: ";
	cin>>a;
	readch(ch,a);
	cout<<"The array entered is: ";
	printch(ch,a);
	reverse(ch,a);
	getch();
}
void readch(char ch[50][50], int n)
{
	cout<<"\nEnter the string: ";
	for(int i=0;i<n;i++)
	{
		cin>>ch[i][i];
	}
}
void printch(char ch[50][50], int n)
{
	cout<<"\nPrinting the string: ";
	for(int i=0;i<n;i++)
	{
		cout<<ch[i][i];
	}
}
void reverse(char ch[50][50], int n)
{
	cout<<"\nThe reversed string is: ";
	for(int i=n-1;i>=0;i--)
	{
		cout<<ch[i][i];
	}
}