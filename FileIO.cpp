#include <iostream>
#include <fstream>      // Access file i/o functions
#include <cmath>	    // Access power function
#include <iomanip>		// Access manipulators

using namespace std;

int main()
{
    // Input variables
    float loanAmt;  // Amount of loan
    float yearlyInt;// Yearly interest
    int numYears;	    // Number of years
    ifstream inData;    // Link to input file
    ofstream outData;   // Link to output file

    // Local variables
    float monthlyInterest;	// Monthly interest rate
    int numberOfPayments;  // Total number of payments
    float payment;	       // Monthly payment
    string inFile;      // Input file name
    string outFile;     // Output file name

    cout << "Enter the name of your input file: ";
    cin >> inFile;

    // Open files
    inData.open(inFile.c_str());

    // If the file exists, go onto prompt for output file and continue
    if (inData) {

        cout << "Enter the name of your output file: ";
        cin >> outFile;
        outData.open(outFile.c_str());

        // Get first line of data from file
        inData >> loanAmt >> yearlyInt >> numYears;

        // Loop through all entries in the input file
        while (inData){

           // Calculate values
            monthlyInterest = yearlyInt / 12;
            numberOfPayments = numYears * 12;
            payment = (loanAmt *
                        pow(monthlyInterest + 1, numberOfPayments)
                        * monthlyInterest)/(pow(monthlyInterest + 1,
                        numberOfPayments) - 1);

            // Send output to file
            outData << fixed << setprecision(2)
                    << "For a loan amount of "
                    << loanAmt  << " with an interest rate of "
                    << yearlyInt << " and a "
                    << numYears
                    << " year mortgage, ";
            outData << " your monthly payments are $" << payment
                    << "." << endl;

            // Send output to screen
            cout << fixed << setprecision(2)
                    << "For a loan amount of "
                    << loanAmt  << " with an interest rate of "
                    << yearlyInt << " and a "
                    << numYears
                    << " year mortgage, " << endl;
            cout << " your monthly payments are $" << payment
                    << "." << endl;

            inData >> loanAmt >> yearlyInt >> numYears;
        }

            // Close files (necessary?)
            inData.close();
            outData.close();
    } else
        cout << "Input file doesn't exist!" << endl;
    return 0;
}

