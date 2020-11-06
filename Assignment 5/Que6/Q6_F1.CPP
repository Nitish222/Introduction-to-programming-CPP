#include<iostream.h>
#include<conio.h>

void printing(char arry[]);
void reverse(char arry[]);

void main()
{
	clrscr();
	//initialized the character array
	char arry[] = {"HelloWorld"};
	
	cout<<"\n\n The character array inputted is: ";
	printing(arry);
	

	reverse(arry);
	getch();
}
void printing(char arry[])
{
	cout<<arry;
}
void reverse(char arry[])
{
	int num = 0,temp = 0;
	while(arry[num] != '\0')
	{
		num++;
	}
	cout<<"\n\n The length of the arryay is"<<num;
	for(int i =0;i<num/2;i++)
	{
		temp = arry[num-i-1];
		arry[num-i-1] = arry[i];
		arry[i]=temp;
	}
	cout<<"\n\nAfter reversing the array is : ";
	printing(arry);
}
