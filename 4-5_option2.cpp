// Sarah Bender

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  int shirts;
  float payPercent;
  float costShirt;
  float total;

  cout << "How many shirts would you like?" << endl;
  cin >> shirts;

  if (shirts < 5)
  {
    payPercent = 1.00;
  }
  else if (shirts <= 10)
  {
    payPercent = 0.90;
  }
  else if (shirts <= 20)
  {
    payPercent = 0.85;
  }
  else if (shirts <= 30)
  {
    payPercent = 0.80;
  }
  else if (shirts >= 31)
  {
    payPercent = 0.75;
  }
  else if (shirts < 0)
  {
    cout << "Invalid input. Please enter a nonnegative number." << endl;
  }

  costShirt = payPercent * 12;
  total = costShirt * shirts;

  cout << setprecision(2) << fixed << showpoint;
  cout << "The cost per shirt is $" << costShirt << " and the total cost is $" << total << endl;

  return 0;
}
