q#include <iostream.h>
#include <conio.h>
int main()
{
  clrscr();
  double marks = 0.0, total = 0.0, perc = 0.0;
  int n = 5;
  cout << "Enter marks for 5 subjects out of 70:" << std::endl;
  while (n != 0)
    {
      cin >> marks;
      if (marks > 70)
	{
	  cout << "\nError:please enter marks below 70";
	  continue;
	}
      else
	{
	  total += marks;
	  n--;
	}
    }
  perc = (total / 350) * 100;
  cout << "\nThe total marks of student are:" << total;
  cout << "\nThe percentage obtained by student is:" << perc;
  cout << "\nThe grades achieved by student is: ";
  if (perc >= 90)
    {
      cout << "A";
    }
  else if (perc >= 80)
    {
      cout << "B";
    }
  else if (perc >= 70)
    {
      cout << "C";
    }
  else if (perc >= 60)
    {
      cout << "D";
    }
  else if (perc >= 50)
    {
      cout << "E";
    }
  else
    {
      cout << "F";
    }
  getch();
}