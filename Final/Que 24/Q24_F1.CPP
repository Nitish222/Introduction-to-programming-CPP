#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void read(int arry[5][12]);
void print(int arry[5][12]);
void Tocontinue();
void main(){
	clrscr();
    Tocontinue();
	getch();
}

struct sales
{
    int months12];
};

void read(int arry[5][12])
{
    for(int i=0;i<5;i++)
    {
        cout<<"\n\nEnter the sales of salesman with id "<<i<<" : ";
		for(int j=0; j<12; j++){
        cout<<"\n\n Enter for "<<j<<"st month: ";
		cin>>arry[i][j];
	}
    }
}
void print(int arry[5][12])
{
    int i=0,j=0;

     /* Loop runs from o to n, and print the array in following pattern
    *                 Months
    Salesman 1: 0 | 1 | 2 |
    *        2: 1 | 2 | 3 |
    */

    cout<<"\n------------------------------------- Months -------------------------------- \n";
    cout<<"                  ";
    for(i=0;i<12;i++)
    {
	  cout<<i+1<<"   ";

    }
    cout<<"\n Salesman ID";
    for(i=0;i<5;i++)
	   {
		(i==0)? cout<<" "<<i+1<<" :  "
			  :cout<<"             "<<i+1<<" :  ";
		  for( j=0; j<12; j++){
            cout<<arry[i][j]<<" | ";    
            if(j==11){cout<<"\n";}
            }
        }
    
}

void Tocontinue(){
    //initializing and declaring variable,
    int sm=0;
    char ch='\0';
    //now we can select the number of slaes man
    cout<<"\n\nEnter the number of salesman: ";
    input(&sm);
    
    //our dynamic array of structures, here we are passing sm as the size of our array salesman
    sales *salesman = new[sm];
    
    //reading and printing array
    read(salesman);
    print(salesman);
    
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