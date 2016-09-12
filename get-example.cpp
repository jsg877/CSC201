// istream::get example
#include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream

/*
* This example prompts for the name of an existing text file and prints its content on the screen,
* using cin.get both to get individual characters and a character array.
*/

using namespace std;

int main () {
  char str[256];

  cout << "Enter the name of an existing text file: ";
  cin.get (str,256);    // get c-string

  ifstream myfile(str);    // open file

  char c;
  while (myfile.get(c))        // loop getting single characters
    cout << c;

  myfile.close();                 // close file

  return 0;
}
