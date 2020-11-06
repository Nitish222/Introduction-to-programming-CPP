#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int input()
{
    int num=0;char ch;
    do
    {
    ch=getch();
    if(ch>=48&&ch<=57)
    {
    cout<<ch;
    num=num*10+(ch-48);
    }
    if(ch=='\b')
    {
    clrscr();
    num=num/10;
    cout<<num;
    }
    if(ch==13)
    {
        return num;
    }}while(1);
}
// int getintegerOnly()
// {
// int num=0;char ch;
// do
// {

// if(ch>=48&&ch<=57)
// {

// num=num*10+(ch-48);
// }

// if(ch=='\b')
// {
// clrscr();
// num=num/10;
// cout<<num;
// }
// }while(1);}
void main()
{
    clrscr();
    int b;
    b=input();
    cout<<"\n"<<b;
    getch() ;
}