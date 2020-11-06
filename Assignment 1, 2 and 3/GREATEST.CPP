#include <iostream.h>
#include <conio.h>
void main()
 {
  clrscr();
  int a[30],max = 0;
    for(int i=0; i<10; i++)
    {
	cin>>a[i];
    }
    for( i=0; i<10; i++)
    {
	for(int j=0; j<10; j++)
	{
	    if(a[i]>a[j])
	    {
		max = a[i];
	    }
	}
    }
    cout << max;
  getch();
 }
