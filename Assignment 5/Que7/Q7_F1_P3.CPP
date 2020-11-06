#include <string.h>
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
    char str1[50] = "Hello ";
    char str2[50] = "World !!";
    cout<<"First String is: "<<str1;
    cout<<"\nSecond String is: "<<str2;

    cout<<"\n\nConcatinating str1 and str2: ";
    strcat(str1, str2);

    cout << str1 ;

    getch();

}