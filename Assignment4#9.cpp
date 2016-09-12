//James Gutierrez
//9/12
//v1
//Reads 2 integers from two different infiles

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int int_1;
    int int_2;

    ifstream inFile1;
    ofstream outFile1;
    ifstream inFile2;
    ofstream outFile2;

    inFile1.open("File1");
    inFile1 >> int_1;

    inFile2.open("File2");
    inFile2 >> int_2;

    if(!inFile1) //if File1 fails to open then it will store int2 to file 2
            {
        outFile2 << int_2;
            }
    else if(!inFile1 && !inFile2) //if file1 and 2 both fail then it will terminate
            {
                cout << "Both files don't exist Goodbye" << endl;
                return 0;
            }
    else if(!inFile2)
            {
                outFile1 << int_1;
            }
    else{
        if(int_1 < int_2)
            {
            cout << int_1 << endl;
            }
        else{
            cout << int_1 << endl;
            }
        }




}
