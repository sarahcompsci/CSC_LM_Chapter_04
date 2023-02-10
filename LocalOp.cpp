// This program illustrates the use of logical operators.

// Sarah Bender

#include <iostream>
using namespace std;

int main()
{
  char year;
  float gpa;

  cout << "What year student are you?" << endl;
  cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)." << endl;
  cin >> year;

  cout << "Now enter your GPA." << endl;
  cin >> gpa;

  if (gpa >= 2.0 && year == '4')
  {
    cout << "It is time to graduate soon." << endl;
  }

  else if (year != '4' || gpa < 2.0)
  {
    cout << "You need more schooling." << endl;
  }

  return 0;
}

// How could you write gpa >= 2.0 in the first if statement using the NOT operator?
// You could instead write !(gpa < 2.0) to indicate that the gpa should not be less than 2.0.

// Could you replace year != '4' in the else if statement with year < 4 or year <= 3? Why or why not?
// No, you could not replace the expression in the else if statement with either of those expressions. This is because the year is asked for as a character, not as an integer. This means that it has no real numerical value that can be measured. 

// If you replace the if and else if statements, which students will graudate and which will not graduate according to this new program? Does this handle all cases (i.e., all combinations of year and GPA)?
// A student can have either a 2.0 GPA or above OR be a senior student or both to graduate because the options do not have to occur at the same time. In order not to graudate, they must now have both lower than a 2.0 GPA AND be in a lower grade than a senior. This handle all cases, which would be a low GPA and a low grade (not graduateing), a high GPA and a high grade (graduating), a low GPA and a high grade (graduating), and a high GPA and a low grade (graduating). 

// Could you replace else if (year != '4' || gpa < 2) with the single word else?
// You can replace it with the single word else, because in all other situations than in the if statement the student would not be eligible for graduation.
