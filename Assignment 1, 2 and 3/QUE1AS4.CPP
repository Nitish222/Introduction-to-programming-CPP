#include <iostream.h>
#include <conio.h>
// function definition to swap values
void swap(int num1, int num2) {
    int temp;
    cout << "\n____Before swapping___ \n";
    cout << "First number = " << num1 << "\n";
    cout << "Seconds number = " << num2 << "\n";
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "\n____After swapping____\n";
    cout << "First number = " << num1 <<"\n";
    cout << "Seconds number = " << num2 <<"\n";
}

int main()
{
    clrscr();
    int num1 = 0, num2 = 0;  // initialize variables
    //taking the user input
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter second Number: ";
    cin>>num2;
    // call function to swap numbers
    swap(num1,num2);
    getch();
}