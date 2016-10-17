//James Gutierrez
//v1.0
//10/17/2016
// Program Driver is a program to test function Swap

#include <iostream>
using namespace std;

void Swap(int& a, int& b); //by adding reference instead of value paramters, you actually swap the values. Not just use them in the function
// The contents of a and b are swapped

int main ()
{
  int  x;// Program Driver is a program to test function Swap

#include <iostream>
using namespace std;

void Swap(int a, int b);
// The contents of a and b are swapped

int main ()
{
  int  x;
  int  y;
  cout  << "Enter two integer values; press return."  << endl;
  cin  >> x  >> y;

  cout  << "Input values: x="  << x  << " and y="  << y  << endl;
  Swap(x, y);
  cout  << "Values swapped: x="  << x  << " and y="  << y  << endl;
 return 0;
}

// ***************************************

void  Swap(int a, int b)
{
  int x;

  x = a;
  a = b;
  b = x;
}

  int  y;
  cout  << "Enter two integer values; press return."  << endl;
  cin  >> x  >> y;

  cout  << "Input values: x="  << x  << " and y="  << y  << endl;
  Swap(x, y);
  cout  << "Values swapped: x="  << x  << " and y="  << y  << endl;
 return 0;
}

// ***************************************

void  Swap(int& x, int& y)
{
  int newx;

  newx = x;
  x = y;
  y = newx;
}


