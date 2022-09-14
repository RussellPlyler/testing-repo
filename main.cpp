#include <iostream>
#include <string>
using namespace std;

void ProgramGreeting(string);

int main() {
  ProgramGreeting("09/14/22");
  return 0;
}

void ProgramGreeting(string str) {
  cout << "Welcome to today's date " << str << endl;
  cout << "Have a nice day.\n";
}