
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//assignned a static size of 12 because number of subject are constant
const int n_sub = 3;
struct student
{    
    int subject[n_sub];
};

void input(int *num);
void read(student students[],int sm);
void print(student students[],int sm);
void Tocontinue();

void main(){
	clrscr();
  Tocontinue();
	getch();
}

void read(student students[],int sm)
{
    for(int i=0;i<sm;i++)
    {
	   cout<<"\n\nEnter the student of students with id "<<i<<" : ";
	   
	   for(int j=0; j<n_sub; ++j){
	   cout<<"\n\n Enter student for"<<j+1<<"th month: ";
	   cin>>students[i].subject[j];
    }
    }
}
void print(student *students,int sm)
{   int i=0,sum=0;
    cout<<"\n         -------- subject --------- \n";
    cout<<"             ";
    for(i=0;i<12;i++)
    {
    cout<<i+1<<" | ";
    }
  for(i=0; i<sm; i++){
	cout<<"\n\nstudents[" <<i<< "]: ";
	for(int j = 0; j <n_sub; j++)
	{
	   cout <<students[i].subject[j] <<" | ";
	}
	}
}

void Tocontinue(){
    //initializing and declaring variable,
    int sm=0;
    char ch='\0';
    //now we can select the number of slaes man
    cout<<"\n\nEnter the number of students: ";
    input(&sm);

    //our dynamic array of structures, here we are passing sm as the size of our array students
    student *students = new student[sm];

    //reading and printing array
    read(students,sm);
    print(students,sm);

    //ask user if he want to continue using program
    cout<<"\n Do you want to continue(y/n): ";
    cin>>ch;
    if(ch=='y'||ch=='Y'){
    Tocontinue();
    }
    else if(ch=='n'||ch=='N'){
    exit(0);
    }
}
void input(int *num){
    while(!(cin>>*num)){
    cout<<"Please Enter a number:";
    cin.clear(); // clear the error flag
    cin.ignore(1000, '\n'); // ignore until the next newline
    }
}
