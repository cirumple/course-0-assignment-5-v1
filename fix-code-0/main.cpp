#include <iostream>
#include <string>
using namespace std;

int GetAge() {
  return 4;
}

float Get_Temperature() {
  return 120.3;
}

int main() {
  cout << "The temperature is: " << Get_Temperature() << endl;
  cout << "The age is: " << GetAge() << endl;
}
