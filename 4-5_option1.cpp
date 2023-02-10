// Sarah Bender

#include <iostream>
using namespace std;

int main()
{
  int quarter1;
  int quarter2;
  int quarter3;
  int quarter4;
  float avgBill;

  cout << "Please input your water bill for quarter 1" << endl;
  cin >> quarter1;

  cout << "Please input your water bill for quarter 2" << endl;
  cin >> quarter2;

  cout << "Please input your water bill for quarter 3" << endl;
  cin >> quarter3;

  cout << "Please input your water bill for quarter 4" << endl;
  cin >> quarter4;

  avgBill = (quarter1 + quarter2 + quarter3 + quarter4) / 12;

  if (avgBill <= 50)
  {
    cout << "Your average monthly bill is $" << avgBill << endl;
    cout << "You're using a typical amount of water." << endl;
  }

  else if (avgBill > 50)
  {
    cout << "Your average monthly bil is $" << avgBill << endl;
    cout << "You're using excessive amounts of water." << endl;
  }

  return 0;
}
