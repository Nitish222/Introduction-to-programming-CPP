#include<iostream.h>
#include<conio.h>

void Reading(int size,int arry[50]);
void Printing(int size, int arry[50]);
int insertion(int pos); 

void main()
{
    clrscr();
    int inNum=0, pos=0, arry[50],size,i=0;
    
    //taking user input for array size
    cout<<"\n\nplease enter the size for the array: ";
    cin>>size;
    
    //calling functions
    Reading(size,arry);
    Printing(size,arry);
    
    //take the number to be inserted as input
    cout<<"\n\nplease enter the number to be inserted: ";
    cin>>inNum;
    
    //getting position
    pos=insertion(pos); 
    
    // increase the size by 1 
    size++; 
    // shift elements forward 
    for (i = size; i >= pos; i--)
    { 
        arry[i] = arry[i - 1]; 
    }

    // insert the insertion number at position
    arry[pos] = inNum;

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
int insertion(int pos) 
{   
    //inputing position at which to be inserted 
    cout<<"\n\nplease enter the Position where to be inserted: ";
    cin>>pos;
    return pos; 
}
