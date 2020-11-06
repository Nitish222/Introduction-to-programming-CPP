#include <string.h>
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
    char str1[50] = "Hello ";
    char str2[50];
    cout<<"The Original String is: "<<str1;
    strcpy(str2,str1);
    cout<<"\n\nAfter copying str2 is: "<<str2;
    getch();

}