#include <iostream.h>
#include <conio.h>

void read(int arry[25], int size);
void print(int arry[25], int size);
void bsort(int arry[25],int size);

void main()
{
	clrscr();
	
	//declared and initialized the variables
	int arry[25],size=0;
	
	//taking user input for array size
    cout<<"\n\nPlease enter the size for the array: ";
    cin>>size;
	read(arry, size);
	
	print(arry,size);
	
	//showing sorted array
	cout<<"\n\nThe sorted array in ascending order is:\n";
	bsort(arry,size);
	getch();
}
void read(int arry[25], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"\n\nEnter the element at position "<<i+1<<" : ";
		cin>>arry[i];
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
void bsort(int arry[], int size)
{
	int temp = 0;
	for(int i=0; i<size-1; i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arry[j]>arry[j+1])
			{
				temp = arry[j+1];
				arry[j+1] = arry[j];
				arry[j] = temp;
			}
		}
	}
	print(arry,size);
}