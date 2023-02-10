// This program illustrates the use of the switch statement.

// Sarah Bender

#include <iostream> 
using namespace std;

int main()
{
  char grade;

  cout << "What grade did you earn in Programming I?" << endl;
  cin >> grade;

  switch (grade)
    {
      case 'A': cout << "YOU PASSED!" << endl;
      break;
      case 'B': cout << "YOU PASSED!" << endl;
      break;
      case 'C': cout << "YOU PASSED!" << endl;
      break;
      case 'D': cout << "YOU PASSED!" << endl;
    }

  switch (grade)    // This is where the switch statement begins.
    {
      case 'A': cout << "an A - excellent work!" << endl;
      break;
      case 'B': cout << "you got a B - good job" << endl;
      break;
      case 'C': cout << "earning a C is satisfactory" << endl;
      break;
      case 'D': cout << "while D is passing, there is a problem" << endl;
      break;
      case 'F': cout << "you failed - better luck next time" << endl;
      break;
      default: cout << "You did not enter an A, B, C, D, or F." << endl;
    }

  // The code rewritten into if, else if, and else statements is below
  if (grade == 'A')
  {
    cout << "an A - excellent work!" << endl;
  }

  else if (grade == 'B')
  {
    cout << "you got a B - good job" << endl;
  }

  else if (grade == 'C')
  {
    cout << "earning a C is satisfactory" << endl;
  }

  else if (grade == 'D')
  {
    cout << "while D is passing, there is a problem" << endl;
  }

  else if (grade == 'F')
  {
    cout << "you failed - better luck next time" << endl;
  }

  else
  {
    cout << "You did not enter an A, B, C, D, or F." << endl;
  }

  return 0;
}

// Remove the break statements from each of the cases. What is the effect on the execution of the program?
// When you type in a grade, instead of geting the statement that is used specifically for that grade, you also get the range of statements that were written after for the other grades. 

// Rewrite the program switch.cpp using if and else if statements rather than a switch statement. Did you use a trailing else in your new version? If so, what did it correspond to in the original program with the switch statement?
// I did use a trailing else in the new version. I used this else in the place of the default that was in the original switch statement. This part of the switch and also of the if statement is meant to take care of anything entered that isn't a valid grade. 
