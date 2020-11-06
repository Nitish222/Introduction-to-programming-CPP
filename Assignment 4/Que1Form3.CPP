#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

//prototype for all functions
void swap(int num1, int num2);
void input(int *num);
void Tocontinue();

int main()
{
    clrscr();
    Tocontinue();
    getch();
}

// function definition to swap values
void swap(int num1, int num2) {
    //temprory variable to store value for swapping
    int temp=0;
    
    cout << "\n____Before swapping___ \n";
    cout << "First number = " << num1 << "\n";
    cout << "Seconds number = " << num2 << "\n";
    //for swapping
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "\n____After swapping____\n";
    cout << "First number = " << num1 <<"\n";
    cout << "Seconds number = " << num2 <<"\n";
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
void Tocontinue(){
    int num1 = 0, num2 = 0;  // initialize variables
    char ch='\0';
    
    //taking the user input
    cout<<"Enter First Number: ";
    input(&num1);
    cout<<"Enter second Number: ";
    input(&num2);
    
    // call function to swap numbers
    swap(num1,num2); 

    //ask user if he want to continue using program
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'){
        Tocontinue();
    }   
    else if(ch=='n'){
        exit(0);
    }
}