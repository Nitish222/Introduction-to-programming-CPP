#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//function to print left half star pattern
void pyramid(int n)
{
    int star=0;
    // Outer loop for rows
    for(int i = 1; i <= n; ++i, star = 0)
    {
	   for(int space = 1; space <= n-i; ++space)
	   {
		  cout <<"  ";
	   }

	   while(star != 2*i-1)
	   {
		  cout << "* ";
		  ++star;
	   }
	   cout << endl;
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
    pyramid(limit); //calling the function
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