#include<iostream.h>
#include<conio.h>

void Reading(int size,int arry[50]);
void Printing(int size, int arry[50]);
int Deletion(int arry[50],int size,int delNum); 

void main()
{
    clrscr();
    int delNum=0, pos=0, arry[50],size,i=0;
    
    //taking user input for array size
    cout<<"\n\nplease enter the size for the array: ";
    cin>>size;
    
    //calling functions
    Reading(size,arry);
    Printing(size,arry);
    
    //take the number to be inserted as input
    cout<<"\n\nplease enter the number to be Deleted: ";
    cin>>delNum;
    
    //getting position
    pos=Deletion(arry,size,delNum); 
    //reduce the size after deletion
    size--;
	for(int j=pos; j<size; j++)
	{
		arry[j]=arry[j+1];
	}
	if(pos==-1)
	{
		cout<<"Element not found!!";
	}

    //Printing the updated array
    Printing(size,arry);
    getch();
}
void Reading(int size, int arry[50])
{
    cout<<"\nPlease input the array of size ("<<size<<"): ";
    /* Loop runs from o to n, in such a way that first
    * element entered by user is stored in arry[0], second 
    * in arry[1] and so on. 
    */
    for (int i = 0; i < size; ++i)
    {
        cout<<"\n\n enter the element at position "<<i<<" : ";
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
int Deletion(int arry[50],int size,int delNum) 
{   
    for (int i = 0; i < size; i++)
    {
    	if (arry[i]==delNum)
    	{
    		return i;
    	}
    }
    return -1;
}
