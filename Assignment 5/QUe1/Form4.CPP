
#include <iostream.h>
#include<memory.h>


using namespace std;
//function prototype for reading printing and maximum
void Reading(int size,unique_ptr<int[]>& arry);
void Printing(int size,unique_ptr<int[]>& arry);
void Maximum(int size,unique_ptr<int[]>& arry);
void Tocontinue();
void input(int *num);
int main()
{
	
	Tocontinue();
	return 0;
}

void Tocontinue(){
    
    //declared variable for array and size
	int size=0;
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
	Maximum(size,arry);	
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

void Maximum(int size,unique_ptr<int[]>& arry)
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
    cout<<"\n\nThe Largest element in array is :"<<largest<<"\nAt position : "<<Position;
 }

void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
