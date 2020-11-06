#include <iostream.h>
#include <conio.h>
// function to compute max
int conditional_expression(int num1, int num2){
   return num1>num2? num1:num2;
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
void Tocontinue(){
    int num1=0,num2=0;
    char ch='\0';
    cout<<"Enter First Number: ";
    input(&num1);
    cout<<"Enter second Number: ";
    input(&num2);
    cout<<"The maximum among "<<num1<<" and "<<num2<<" is: "<<conditional_expression(num1,num2);
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'){
        Tocontinue();
    }   
    else if(ch=='n'){
        exit(0);
    }
}
void main()
{   
    clrscr();
    Tocontinue();
    getch();
}