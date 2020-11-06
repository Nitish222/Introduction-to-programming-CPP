#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void finding_vowel(char c){
	if (c == 'a'|| c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
	{
		cout<<"\nIt is a vovel!!"; //printing in function cna save us line of code in other function
	}
	else
	{
		cout<<"\nIt is not a vovel!!";
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
		else cout<< "Please enter a Character\n";
		}
		else{
			cout<< "Failed to read any input, quitting the program now.\n";
			exit(1);
		}
	}
	*ch=c;
}
void Tocontinue(){
    char ch='\0',c='\0';
    cout<<"Enter a character: ";
    input(&c);
    finding_vowel(c);
    cout<<"\n Do you want to continue(y/n): ";
    input(&ch);
    if(ch=='y'){
	   Tocontinue();
    }
    else if(ch=='n'){
	   exit(0);
    }
}
void main(){
	clrscr();
	Tocontinue();
	getch();
}	