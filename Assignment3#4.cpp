//James Gutierrez
//9/12
//v1
//Checkerboard Program with improvements... improvements will be commented

#include <iostream>
#include <string>
using namespace std;

const string BLACK = "########";// changed * to # to take up more space on the screen
const string WHITE = "        ";

int main()
{
    string whiteRow;
    string blackRow;
    int loopcount = 0; // create a variable for the loopcount

    whiteRow = WHITE + BLACK + WHITE + BLACK +
                WHITE + BLACK + WHITE + BLACK;

    blackRow = BLACK + WHITE + BLACK + WHITE +
                BLACK + WHITE + BLACK + WHITE;

        while (loopcount < 4) // because the original program was jsut repeating the same things 4 times. I just looped it instead, because i didn't wanna type all of that.
        {
            cout << whiteRow << endl;
            cout << whiteRow << endl;
            cout << whiteRow << endl;
            cout << whiteRow << endl;
            cout << whiteRow << endl;

            cout << blackRow << endl;
            cout << blackRow << endl;
            cout << blackRow << endl;
            cout << blackRow << endl;
            cout << blackRow << endl;

    loopcount++; //initiates the loop
        }
    return 0;
}
