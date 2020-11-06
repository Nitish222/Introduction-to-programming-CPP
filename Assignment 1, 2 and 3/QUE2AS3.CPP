#include <iostream.h>
#include <conio.h>
// function to compute equality
int test_equality(int num1, int num2,int num3){
   if(num1==num2){
	if(num2==num3)
	{
		return 1;
	}
   }
   return 0;
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
void Tocontinue(){
    int num1=0,num2=0,num3=0;
    char ch='\0';
    cout<<"Enter First Number: ";
    input(&num1);
    cout<<"Enter second Number: ";
    input(&num2);
    cout<<"Enter Third Number: ";
    input(&num3);
    //check the value returned from the function
    if(test_equality(num1,num2,num3)==1)
    {
        cout<<"\nNumbers are equal!!";
    }
    else
    {
        cout<<"numbers are not equal";
    }
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