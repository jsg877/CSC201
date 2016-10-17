// This program demonstrates passing by value

/*
This program initializes two variables in main() and then passes them to the
swap(() function to swap them.  The variables are identified as "references"
when the function is called.

Because the parameters to the swap() function
were declared as references, the values in main() are passed by reference
and thus are changed in main as well.
*/

#include <iostream>

using namespace std;

void swap(int &x, int &y);


int main()
{
int x = 5, y = 10;

cout << "Main. Before swap, x:  = " << x  << " y: " << y << "\n";

swap (x,y);

cout << "Main. After swap, x:  = " << x  << " y: " << y << "\n";

return 0;
}

void swap (int &rx, int &ry)
{

    int temp;

    cout << " Swap. Before swap, rx: " << rx << " ry: " << ry  << "\n";

    temp = rx;
    rx = ry;
    ry = temp;

    cout << " Swap. After swap, rx: " << rx << " ry: " << ry  << "\n";
}
