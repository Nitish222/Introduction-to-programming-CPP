#include<iostream.h>
#include<string.h>
#include<conio.h>
 
int main()
{
   clrscr();
   char str[30] = "Hello";
 
   cout<<"String before strrev( ) : "<<str;
 
   cout<<"\nString after strrev( )  : "<<strrev(str);
 
   getch();
}