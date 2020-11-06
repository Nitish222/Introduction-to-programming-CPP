#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

//function prototype for reading printing and maximum
void Reading(int size,int arry[50]);
void Printing(int size, int arry[50]);
int* insertion(int &size,int arry[50],int inNum, int pos);
void Tocontinue();
void input(int *num);
void main()
{
	clrscr();
	Tocontinue();
	getch();
}

void Tocontinue(){
    
    //declared variable for array and size
	int inNum=0, pos=0, arry[50],size;
	char ch='\0';

	//taking user input for array size
	cout<<"\nPlease enter the size for the array: ";
    input(&size);
    //given user a error if he request the size larger than the initialized
    if (size>50){
   		cout<< "\n\n!!Array requested too large!!";  
	}
	else{
    //calling the functions
    
    //reading and printing the initial array    
    Reading(size,arry);
    Printing(size,arry);
	
    //calling insertion function
    insertion(size,arry,inNum,pos);
    
    //printing updated array 
    Printing(size,arry);
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

void Reading(int size, int arry[50])
{
	cout<<"\n\nPlease input the array of size ("<<size<<"): ";
	/* Loop runs from o to n, in such a way that first
    * element entered by user is stored in arry[0], second
    * in arry[1] and so on.
    */
	for (int i = 0; i < size; ++i)
	{
		cout<<"\n\nEnter the element at position "<<i<<": ";
		input(&arry[i]);

	}
}
void Printing(int size,int arry[50])
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

// Function to insert x in arr at position pos 
int* insertion(int &size, int arry[], 
             int inNum, int pos) 
{  
    int i=0;
    //taking position and number to be inserted
    cout<<"\nPlease enter the number to be inserted: ";
    input(&inNum);
    cout<<"\nPlease enter the position where you want to insert "<<inNum<<" : ";
    input(&pos);

    // increase the size by 1 
    size++; 
    // shift elements forward 
    for (i = size; i >= pos; i--)
    {
        arry[i] = arry[i - 1]; 
    }
    // insert inNu at pos 
    arry[pos] = inNum; 
  
    return arry; 
} 

void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}