//*****************************************************
// Chessboard program
// This program prints a chessboard pattern that is
// built up from basic strings of white and black
// characters.
//*****************************************************
#include <iostream>
#include <string>

using namespace std;

const string BLACK = "********"; // Define black square line
const string WHITE = "        "; // Define white square line
const string BORDER = "________";


int main()
{
    string whiteRow;   // White square beginning row
    string blackRow;   // Black square beginning row
    string borderRow;
    // Create a white-black row
    whiteRow = "|" + WHITE + BLACK + WHITE + BLACK +
               WHITE + BLACK + WHITE + BLACK + "|";
    // Create a black-white row
    blackRow = "|" + BLACK + WHITE + BLACK + WHITE +
               BLACK + WHITE + BLACK + WHITE + "|";

    borderRow = BORDER +BORDER + BORDER + BORDER +
                BORDER + BORDER + BORDER + BORDER;

    cout << " " + borderRow + " " << endl;
  // Print five white-black rows
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
  // Print five black-white rows
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
  // Print five white-black rows
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
  // Print five black-white rows
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
  // Print five white-black rows
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
  // Print five black-white rows
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
  // Print five white-black rows
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
    cout << whiteRow << endl;
  // Print five black-white rows
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;
    cout << blackRow << endl;

    cout << "|" + borderRow + "|" << endl;

    return 0;
}
