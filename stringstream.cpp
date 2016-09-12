// stringstreams Example
/*
* In this example, we acquire numeric values from the standard input indirectly: 
* Instead of extracting numeric values directly from cin, we get lines from it into a string object 
* (mystr), and then we extract the values from this string into the variables price and quantity. 
* Once these are numerical values, arithmetic operations can be performed on them, 
* such as multiplying them to obtain a total price.
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  string mystr;
  float price=0;
  int quantity=0;

  cout << "Enter price: ";
  getline (cin,mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline (cin,mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price*quantity << endl;
  return 0;
}