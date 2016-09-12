// istream::ignore example
#include <iostream>     // std::cin, std::cout
using namespace std;

// Program to get your first and last initial
// maximum number of character to ignore = 60
// delimiting character is a space

int main () {
  char first, last;

  cout << "Please, enter your first name followed by your surname: ";

  first = cin.get();            // get character of first name
  cin.ignore(60,' ');           // continue to ignore all the rest until a space is entered

  last = std::cin.get();        // get character of last name

  cout << "Your initials are " << first << last << '\n';

  return 0;
}
