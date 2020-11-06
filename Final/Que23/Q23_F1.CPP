#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

char calcgrade(float perc);
void main(){
	clrscr();
    float i=0,j=0,marks[4][3],sum=0,perc;
    for(i=0;i<4;i++)
    {
	   cout<<"\n\nEnter the markes of student with id "<<i<<" : ";
	   for(j=0; j<3; j++){
	   cout<<"\n\n Enter for "<<j<<"th subject: ";
	   cin>>marks[i][j];
	   }
    }
    /* Loop runs from o to n, and print the array in following pattern
	*              subject
	   Student 1: 0 | 1 | 2 |
	*          2: 1 | 2 | 3 |
	*/

    cout<<"\n                   Subject  |   Total | Percentage\n";
    cout<<"                  ";
    for(i=0;i<3;i++)
    {
	   cout<<i+1<<"   ";

    }
    cout<<"\n Student ID";
    for(i=0;i<4;i++)
    {
	    sum=0;
	   (i==0)? cout<<"  "<<i+1<<" :  "
			 :cout<<"             "<<i+1<<" :  ";
	   for(j=0; j<3; j++){
			 cout<<marks[i][j]<<" | ";
			 sum+=marks[i][j];
	   }
	   perc = (sum/3);
	   cout<<"   "<<sum<<"       "<<perc<<"\n";
	  cout<<"\nGrade Achieved :"<<calcgrade(perc)<<"\n";
    }
	getch();
}

char calcgrade(float perc){
    if(perc<30){
        return 'F';
    }
    else if(perc<50){
        return 'C';
    }
    else if(perc<70){
        return 'B';
    }
    else {
        return 'A';
    }
}