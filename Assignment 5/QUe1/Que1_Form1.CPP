#include<iostream.h>
#include<conio.h>

//function prototype for reading printing and maximum
void Reading(int size,int arry[50]);
void Printing(int size, int arry[50]);
void Maximum(int size,int arry[50]);

void main()
{
	clrscr();
	//declared variable for array and size
	int arry[50],size=0;
	
	//taking user input for array size
	cout<<"\n\nPlease enter the size for the array: ";
	cin>>size;
	
	Reading(size,arry);
	Printing(size,arry);
	Maximum(size,arry);
	getch();
}

void Reading(int size, int arry[50])
{
	cout<<"\nPlease input the array of size ("<<size<<") :";
	/* Loop runs from o to n, in such a way that first
    * element entered by user is stored in arry[0], second 
    * in arry[1] and so on. 
    */
	for (int i = 0; i < size; ++i)
	{
		cout<<"\nEnter the element at position"<<i<<" : ";
		cin>>arry[i];
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

void Maximum(int size,int arry[50])
{
	// Storing first array element in "largest" variable
   int largest = arry[0], Position;
   for(int i = 1;i < size; i++) {
      /* We are comparing largest variable with every element
       * of array. If there is an element which is greater than
       * largest variable value then we are copying that variable
       * to largest, this way we have the largest element copied
       * to the variable named "largest" at the end of the loop 
       *
       */
      if(largest < arry[i])
      	{
         	largest = arry[i];
      	 	Position = i;
      	}
      }
    cout<<"The Largest element in array is :"<<largest<<" at position : "<<Position;  
 } 
