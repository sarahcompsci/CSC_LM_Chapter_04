// This program tests whether or not an initialized value
// is equal to a value input by the user.

// Sarah Bender

#include <iostream>
using namespace std;

int main()
{
  int num1;    // num1 is not initialized
  int num2;    // num2 is not initialized

  cout << "Please enter an integer" << endl;
  cin >> num1;

  cout << "Please enter another integer" << endl;
  cin >> num2;

  cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

  if (num1 == num2)
  {
    cout << "The values are the same." << endl;
    cout << "Hey, that's a coincidence!" << endl;
  }
  else
  {
    cout << "The values are not the same." << endl;
  }
    
  return 0;
}

// Does the program do what you expect? If so, explain what it is doing. If not, locate the error and fix it.
// The program does exactly what was expected. It first prompts the user to input a number. Once the user inputs the number, it compares it to the already established second number, which has a value of 5. The response changes depending on whether or not the first number had an equivalent value of 5. 
