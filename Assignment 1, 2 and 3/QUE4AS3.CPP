#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void exploring_characters(char ch)
{
    if(ch>= 'A' && ch <= 'Z')
    {
	   cout<<"\n is uppercase alphabet.";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
	   cout<<"\n is lowercase alphabet.";
    }
    else
    {
	   cout<<"\n is a special case character.";
    }
}
void input(char *ch)
{
    char c='\0';
    while(1)
    {
        if(cin >> c) // well it was valid as far as the type is concerned
       {
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
        {
            break; // everything worked
        }
        else cout<< "Please enter a Character!!\n";
        }
        else{
            cout<< "Failed to read any input, quitting the program now.\n";
            exit(1);
        }
    }
    *ch=c;
}
void Tocontinue()
{
    char ch='\0',c='\0';
    cout<<"Enter a character: ";
    input(&c);
    exploring_characters(ch);
    cout<<"\n Do you want to continue(y/n): ";
    input(&ch);
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