
//Program using strlen to compare the length of two strings

#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
	clrscr();
	char str1[] = "Hello World";
    char str2[] = "Hello world but larger";
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    cout <<"\nLength of str1 = " << len1;
    cout <<"\nLength of str2 = " << len2;
    if (len1 > len2){
        cout << "str1 is longer than str2";
    }

    else if (len1 < len2){
        cout << "str2 is longer than str1";
    }
    
    else{
        cout << "str1 and str2 are of equal length";
    }
    getch();
}