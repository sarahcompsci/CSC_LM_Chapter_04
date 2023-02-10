// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise.

// Sarah Bender

#include <iostream>
using namespace std;

int main()
{
  float average;    //holds the grade average

  cout << "Input your average:" << endl;
  cin >> average;

  if (average > 100)
  {
    cout << "Invalid data" << endl;
  }

  else if (average >= 90)
  {
    cout << "You got an A." << endl;
  }

  else if (average >= 80)
  {
    cout << "You got a B." << endl;
  }

  else if (average >= 60)
  {
    cout << "You Pass" << endl;
  }

  else if (average >= 0)
  {
    cout << "You Fail" << endl;
  }

  return 0;
}

// What happens when you input 60 as the average?
// Since the two if statements do not include an output for when the average is exactly equal to 60, the program simply returns nothing from your input. 

// What will happen to your program if you enter a negative value such as -12?
// In this case, the grade -12 is not considered with a proper output in the if and else if statements, so the program again simply returns nothing from your input. 
