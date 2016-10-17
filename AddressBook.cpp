//James Gutierrez
//v1
//10/3/16
//Address book that allows user to look up based on firstname, lastname, address or phone

#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

void OpenFile(string, ifstream&);
bool GetRecord(ifstream&, string&, string&, string&, string&);
void PrintRecord(string, string, string, string);
void SearchFirstName(ifstream&);
void SearchLastName(ifstream&);
void SearchAddress(ifstream&);
void SearchPhone(ifstream&);
string NormalizeString(string);
void TrimSpaces(string&);
void PurgeLines(ifstream&, int);

int main()
{
	//initialize variables
    string firstName, lastName, address, phone;
    string filename;
    ifstream inData;
    char searchOption;
	//open file
    OpenFile(filename, inData);
	//loop for user input to correct for improper input
    do {
        cout << "Enter how you want to search... " << endl;
        cout << "(F)irst name, (L)ast name, (A)ddress, (P)hone, e(X)it: ";
        cin >> searchOption;
        searchOption = toupper(searchOption);

        switch (searchOption) {
            case 'F':
                SearchFirstName(inData);
                break;
            case 'L':
                SearchLastName(inData);
                break;
            case 'A':
                SearchAddress(inData);
                break;
            case 'P':
                SearchPhone(inData);
                break;
            case 'X':
                break;
            default:
                cout << "Invalid option selected!" << endl;
                break;
        }

    } while (searchOption != 'X');

    return 0;
}
	//sub function to open the file
void OpenFile(string filename, ifstream& inData)
{
    do {
        cout << "Enter file name to open: ";
        cin >> filename;

        inData.open(filename.c_str());

        if (!inData)
            cout << "File not found!" << endl;

    } while (!inData);
}

// Searches passed file stream for a first name read from the user
void SearchFirstName(ifstream& inData)
{
    string searchName;
    string firstName, lastName, phone, address;
    string normalSearchName, normalFirstName;

    cout << "Enter first name to search for: ";
    cin >> searchName;

    normalSearchName = NormalizeString(searchName);     // Convert name to all uppercase

    // Loop through all records in the file
    while (GetRecord(inData, firstName, lastName, phone, address)){

        normalFirstName = NormalizeString(firstName);   // Convert retrieved string to all uppercase

        if (normalFirstName == normalSearchName) // Requested name matches
            break;
    }

    // Matching name was found before the end of the file
    if (inData){
        cout << "Record found: " << endl;
        PrintRecord(firstName, lastName, phone, address);
    }
    else    // End of file. Name not found.
    {
        cout << searchName << " not found!" << endl << endl;
    }

    // Clear file fail state and return to beginning
    inData.clear();
    inData.seekg(0);
}

	// Searches through to find file based on last name
void SearchLastName(ifstream& inData)
{
    string searchName;
    string firstName, lastName, phone, address;
    string normalSearchName, normalLastName;

    cout << "Enter last name to search for: ";
    cin >> searchName;

    normalSearchName = NormalizeString(searchName);     // Convert name to all uppercase

    // Loop through all records in the file
    while (GetRecord(inData, firstName, lastName, phone, address)){

        normalLastName = NormalizeString(lastName);   // Convert retrieved string to all uppercase

        if (normalLastName == normalSearchName) // Requested name matches
            break;
    }

    // Matching name was found before the end of the file
    if (inData){
        cout << "Record found: " << endl;
        PrintRecord(firstName, lastName, phone, address);
    }
    else    // End of file. Name not found.
    {
        cout << searchName << " not found!" << endl << endl;
    }

    // Clear file fail state and return to beginning
    inData.clear();
    inData.seekg(0);
}

// searches through file based on address
void SearchAddress(ifstream& inData)
{
    string searchAddress;
    string firstName, lastName, phone, address;
    string normalSearchAddress, normalStreetName;

    cout << "Enter address in the full address: ";
    cin.ignore();
    getline(cin, searchAddress);

    normalSearchAddress = NormalizeString(searchAddress);     // Convert name to all uppercase

    // Loop through all records in the file
    while (GetRecord(inData, firstName, lastName, phone, address)){

        normalStreetName = NormalizeString(address);   // Convert retrieved string to all uppercase

        if (normalStreetName == normalSearchAddress) // Requested name matches
            break;
    }

    // Matching name was found before the end of the file
    if (inData){
        cout << "Record found: " << endl;
        PrintRecord(firstName, lastName, phone, address);
    }
    else    // End of file. Name not found.
    {
        cout << searchAddress << " not found!" << endl << endl;
    }

    // Clear file fail state and return to beginning
    inData.clear();
    inData.seekg(0);
}

// Search through file based on phone number
void SearchPhone(ifstream& inData)
{
    string search_Phone;
    string firstName, lastName, phone, address;
    string trimsearch_Phone, normalsearch_Phone;

    cout << "Enter the phone number to search for in this format (xxx) xxx-xxxx ";
    cin.ignore();
    getline(cin, search_Phone);

    //TrimSpaces(search_Phone);     // Trim Characters on phone #

    // Loop through all records in the file
    while (GetRecord(inData, firstName, lastName, phone, address)){

        normalsearch_Phone=phone;
        //TrimSpaces(normalsearch_Phone);   // Convert retrieved string to all uppercase

        if (search_Phone == normalsearch_Phone) // Requested name matches
            break;
    }

    // Matching name was found before the end of the file
    if (inData){
        cout << "Record found: " << endl;
        PrintRecord(firstName, lastName, phone, address);
    }
    else    // End of file. Name not found.
    {
        cout << search_Phone << " not found!" << endl << endl;
    }

    // Clear file fail state and return to beginning
    inData.clear();
    inData.seekg(0);
}

// Read all elements of an address book entry from a given file
// Return true if successful, false othewise (Based on stream state)
bool GetRecord(ifstream& inData,
               string& firstName, string& lastName,
               string& phone, string& address)
{

    getline(inData, firstName, ',');
    TrimSpaces(firstName);

    getline(inData, lastName, ',');
    TrimSpaces(lastName);

    getline(inData, phone, '\n');
    TrimSpaces(phone);

    getline(inData, address);
    TrimSpaces(address);

    return inData;
}

// Given all the elements of an address book entry, print the results
void PrintRecord(string firstName, string lastName,
                 string phone, string address)
{
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Phone: " << phone << endl;
    cout << "Address: " << address << endl;
}

// Convert passed string to all upper case and return result
string NormalizeString(string str)
{
    string nString = str;
    int i;

    for (i = 0; i < str.size(); i++)
    {
        nString[i] = toupper(str[i]);
    }

    return nString;
}

// Remove any leading or trailing spaces from given string
void TrimSpaces(string& str)
{
    int index;

    index = str.find_first_not_of(" \t");
    str.erase(0, index);

    index = str.find_last_not_of(" \t");
    if (string::npos != index)
        str.erase(index + 1);
}

// **Not used**
// Read and discard a specified number of lines from a given file
void PurgeLines(ifstream& inData, int numLines)
{
    string buffer;

    for (int i = 0; i < numLines; i++)
        getline(inData, buffer, '\n');
}
