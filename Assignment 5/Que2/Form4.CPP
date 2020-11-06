
#include <iostream>
#include<memory>


using namespace std;
//function prototype for reading printing and maximum
void Reading(int size,unique_ptr<int[]>& arry);
void Printing(int size,unique_ptr<int[]>& arry);
void insertion(int &size,unique_ptr<int[]>& arry,int inNum, int pos);
void Tocontinue();
void input(int *num);
int main()
{
	
	Tocontinue();
	return 0;
}

void Tocontinue(){
    
    //declared variable for array and size
	int inNum=0, pos=0,size;
	char ch='\0';


	//taking user input for array size
	cout<<"\nPlease enter the size for the array: ";
    input(&size);
    //here we dynamically allocated the size for our array using smart pointer with default_delete
    //from memory.h header file to release memory automatically
    unique_ptr<int[]> arry = unique_ptr<int[]>(new int[size]);
	
    //int* arry = new int[size];
    //calling the functions
    Reading(size, arry);
    Printing(size,arry);


	//calling insertion function
    insertion(size,arry,inNum,pos);	
    
    //printing the updated array
    Printing(size,arry);
    
    //ask user if he want to continue using program
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
        arry.release();  //here we release the memory allocated to our array
        Tocontinue();
    }   
    else if(ch=='n'||ch=='N'){
        exit(0);
    }
}

void Reading(int size, unique_ptr<int[]>& arry)
{
	cout<<"\n\nPlease input the array of size ("<<size<<"): ";
	/* Loop runs from o to n, in such a way that first
    * element entered by user is stored in arry[0], second
    * in arry[1] and so on.
    */
	for (int i = 0; i < size; ++i)
	{
		cout<<"\n\nEnter the element at position "<<i<<": ";
		//arry[i]=input(&num);
        input(&arry[i]);

	}
}
void Printing(int size,unique_ptr<int[]>& arry)
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
	for(int i=0;i<size;i++)
	{
		cout<<arry[i]<<" | ";
	}
}

// Function to insert inNum in arry at position pos
void insertion(int &size, unique_ptr<int[]>& arry,
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
    // insert inNum at pos
    arry[pos] = inNum;
}

void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
