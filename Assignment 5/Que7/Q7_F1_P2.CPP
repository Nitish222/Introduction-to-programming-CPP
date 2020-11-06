
//program to check wheather the string precedes the other string or is same 
#include <string.h>
#include <iostream.h>
#include <conio.h>

void check(char *str1, char *str2, int result)
{
    if(result > 0)
        cout << str2 << " precedes " << str1 << endl;
    else if (result < 0)
        cout << str1 << " precedes " << str2 << endl;
    else
        cout << str1 << " and " << str2 << " are same" << endl;
}

int main()
{
	clrscr();
    char str1[] = "Hello World";
    char str2[] = "Hello";
    int result;

    result = strcmp(str1,str2);
    check(str1,str2,result);

    result = strcmp(str1,str1);
    check(str1,str1,result);

    getch();
}