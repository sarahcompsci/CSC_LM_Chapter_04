// Sarah Bender

#include <iostream>
using namespace std;

int main()
{
  char state; 
  char room;

  cout << "Please input 'I' if you are in-state or 'O' if you are out-of-state." << endl;
  cin >> state;
  cout << "Please input 'Y' if you require room and board and 'N' if you do not." << endl;
  cin >> room;

  if ((state = 'I') && (room = 'N'))
  {
    cout << "Your total bill for this semester is $3000." << endl;
  }
  else if ((state = 'I') && (room = 'Y'))
  {
    cout << "Your total bill for this semester is $5500." << endl;
  }
  else if ((state = 'O') && (room = 'N'))
  {
    cout << "Your total bill for this semester is $4500." << endl;
  }
  else if ((state = 'O') && (room = 'Y'))
  {
    cout << "Your total bill for this semester is $8000." << endl;
  }
  else
  {
    cout << "Please input a valid answer for each question." << endl;
  }

  return 0;
}
