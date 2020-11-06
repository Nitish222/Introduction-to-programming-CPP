#include <iostream.h>
#include <conio.h>
#include<stdlib.h>


//function prototypes
void read(int arry[25], int size);
void print(int arry[25], int size);
void ssort(int arry[25],int size);
void input(int *num);
void Tocontinue();

void main()
{
	clrscr();
	Tocontinue();	
	getch();
}

void Tocontinue(){
    
    //declared and initialized the variables and array
	int size=0;
    char ch='\0';

    //taking user input for array size
    cout<<"\nPlease enter the size for the array: ";
    input(&size);

    //Dynamically allocating our array

    int arry[] = new int[size];
    //given user a error if he request the size larger than the initialized size of 25
    if (size>25){
        cout<< "\n\n!!Array requested too large!!";  
    }
    else{
    //calling the functions
    
    //initial array reading and printing
	read(arry, size);
	printing(arry,size);
    
    //calling function for sorting
	cout<<"\n\nThe sorted array in ascending order is:\n";
	ssort(arry,size);
    }   
    //ask user if he want to continue using program
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
        delete[] arry;
        Tocontinue();
    }   
    else if(ch=='n'||ch=='N'){
        exit(0);
    }
}
void read(int arry[25], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"\n\n Enter the element at position "<<i<<" : ";
		input(&arry[i]);
	}
}
void print(int arry[25], int size)
{
	cout<<"\n Position: ";
    /* Loop runs from o to n, and print the array in following pattern
    * Position : 0 | 1 | 2|
    * Element :  1 | 2 | 3|
    */
    for(int i=0;i<size;i++)
    {
        cout<<i<<"   ";
    }
    cout<<"\n Element:  ";
    for(i=0;i<size;i++)
    {
        cout<<arry[i]<<" | ";
    }
}
void ssort(int arry[], int size)
{
	int index=0, temp=0;
	//for printing in ascending order
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
	       {
			if(arry[j]<arry[i])
			{
				temp = arry[j];
				arry[j] = arry[i];
				arry[i] = temp;
			}
	       }
	}

	//printing the sorted array
	print(arry,size);
}

void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}