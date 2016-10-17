// This program demonstrates passing by value

/*
This program initializes two variables in main() and then passes them to the
swap(() function, which appears to swap them.  But when they are examined in
main(), they appear unchanged.

This is because x and y  are passed to the swap() function by value.
That is, local copies were made in the function.
*/

#include <iostream>

using namespace std;

void swap(int x, int y);


int main()
{
int x = 5, y = 10;

cout << "Main. Before swap, x:  = " << x  << " y: " << y << "\n";

swap (x,y);

cout << "Main. After swap, x:  = " << x  << " y: " << y << "\n";

return 0;
}

void swap (int x, int y)
{

    int temp;

    cout << " Swap. Before swap, x: " << x << " y: " << y  << "\n";

    temp = x;
    x = y;
    y = temp;

    cout << " Swap. After swap, x: " << x << " y: " << y  << "\n";
}



