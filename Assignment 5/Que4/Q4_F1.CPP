#include <iostream.h>
#include <conio.h>

void read(int arry[25], int size);
void print(int arry[25], int size);
void ssort(int arry[25],int size);

void main()
{
	clrscr();
	
	//declared and initialized the variables
	int arry[25],size=0;
	
	//taking user input for array size
    cout<<"\n\nPlease enter the size for the array: ";
    cin>>size;

	//initial array
	read(arry, size);
	printing(arry,size);
	
	//sorted array
	cout<<"\n\nThe sorted array in ascending order is:\n";
	ssort(arry,size);
	getch();
}
void read(int arry[25], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"\n\n Enter the element at position "<<i<<" : ";
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