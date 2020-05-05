#include <iostream>
#include <string>
using namespace std;



int main() {
  string  s;
  cout << "Please type a word: ";
  cin >> s;
  cout << "Your word with pre added is: " << add_prefix(s);
}
string add_prefix(const string input) {
  return "pre" + s;
}