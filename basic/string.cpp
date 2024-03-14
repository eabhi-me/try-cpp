#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "John ";
  string lastName = "Doe";
  // direct + concatination
  string hello = firstName + lastName + " " + "Hello";
  cout << hello << endl;
  // append method
  string fullName = firstName.append(lastName);
  cout << fullName;

  // input string as line read
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;

  return 0;
}