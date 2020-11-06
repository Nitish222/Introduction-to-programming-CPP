#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

//function prototype for all the functions
void reading(int brr[25], int brr_s);
void printing(int brr[25], int brr_s);
int sum_of_array(int brr[25], int brr_s);
void Tocontinue();
void input(int *num);


void main()
{
	clrscr();
	
	getch();
}

//function for reading the each element of array
void reading(int arr[25], int a_len)
{
	for(int i=0;i<a_len;i++)
	{
		cout<<"\nEnter "<<i+1<<" Element: ";
		input(&arr[i]);
	}
}
//function for printing the array in following format
// position  0    1    2    3
// Elements  11 | 22 | 33 | 44
void printing(int arr[25], int a_len)
{
	cout<<"\n Position:";
	for(int i=0;i<a_len;i++){
		cout<<i<<"    ";
	}
	cout<<"\n Element: ";
	for(i=0;i<a_len;i++){
		cout<<arr[i]<<" | ";
	}
}
//function for doing sum of the elements in array
int sum_of_array(int arr[25], int a_len)
{
	int sum=0;
	for(int i=0;i<a_len;i++)
		sum +=arr[i];
	return sum;
}

//function fur inputing 
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Enter a positive integer: ";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}

//function to ask user if he want to continure using program
void Tocontinue(){

	int arr[25],a_len=0; //initialized length and declared array
	char ch='\0';
	
	cout<<"Enter the size of the array : ";
	input(&a_len); //input size
	
	cout<<"\n Enter the elements of the array: ";
	reading(arr, a_len);
	cout<<"\n The array is: ";
	printing(arr,a_len);
	cout<<"\n\n The sum of the elements of the array is: "<<sum_of_array(arr,a_len);
	
	cout<<"\n Do you want to continue(y/n): ";
	cin>>ch;
	if(ch=='y'){
		Tocontinue();
	}	
	else if(ch=='n'){
		exit(0);
	}
}