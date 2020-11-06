#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();
  char ch=’/0’; //initialized ch
  cout<<"Enter a Character :";
  while(!(cin>>ch)) //loop run until the user is inputing in the ch
	{
		cout<<”\n\nEnter a character please :”;
  		cin.clear();  // clear the error flag
		cin.ignore(1000, ‘\n’); // ignore until the next newline
	}
  cout<<"The AS1CII value of your character"<< ch <<" is : "<<int(ch); 
  getch();
 }
