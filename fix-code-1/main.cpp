#include <iostream>
#include <string>
using namespace std;

int addNumbers(const float value1,const float value2) {
  return value_1 + value_2;
}

int main() {
  float val1;
  float val2;

  cout << "Enter a number: ";
  cin >> val1;
  cout << "Enter another number; ";
  cin >> val2;
  cout << "The sum of these numbers is: " << addNumbers(val1, val2);
}
