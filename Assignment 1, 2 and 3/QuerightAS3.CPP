#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void right_half(int n)
{
	//for row
	for(int i = 1; i <= n; ++i)
    {
    	//for coloumn and printing star
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";  
        }
        cout << "\n";
    }
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
void Tocontinue(){
    int limit=0;
    char ch='\0';
    cout<<"Enter the size of limit for pattern: ";
    input(&limit);
    right_half(limit); //calling the function
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