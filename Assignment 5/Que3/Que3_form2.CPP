#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

//function prototypes
void Reading(int size,int arry[50]);
void Printing(int size, int arry[50]);
int* Deletion(int arry[50],int &size,int delNum); 
void input(int *num);
void Tocontinue();

void main()
{
    clrscr();
    Tocontinue();
    getch();
}

void Tocontinue(){
    
    //declared variable for array and size
    int delNum=0,arry[50],size;
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
    Deletion(arry,size,delNum);
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
    cout<<"\nPlease input the array of size ("<<size<<"): ";
    /* Loop runs from o to n, in such a way that first
    * element entered by user is stored in arry[0], second 
    * in arry[1] and so on. 
    */
    for (int i = 0; i < size; ++i)
    {
        cout<<"\n\n enter the element at position "<<i<<" : ";
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
int* Deletion(int arry[50],int &size,int delNum) 
{   
    int found=0;
    //take the number to be inserted as input
    cout<<"\n\nplease enter the number to be Deleted: ";
    input(&delNum);
    for (int i = 0; i < size; i++)
    {
        if (arry[i]==delNum)
        {
            //reduce the size 
            size--;
            for(int j=i; j<size; j++)
            {
                arry[j]=arry[j+1];
            }
            found++;            
            break;

        }
    }
    if(found!=0){

        //printing updated array 
        Printing(size,arry);
        return arry;
    }
    else
    {
        cout<<"Element not found!!";
    }
    
}

void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
