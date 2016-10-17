#include <iostream>
#include <string>
#include <cctype> //Used to make sure all input from user are alphabet characters
#include <iomanip>

using namespace std;

	string origstring;
	string newstring;

int main()
{
//establish variables
string inChar;
string word;
int i = 0;
inChar =word[i];
int stringlen;
//this is an array to establish all 26 values for the ICAO alphabet
string ICAO[26] ={ "Alpha", "Brave", "Charlie", "Delta", "Echo", "Foxtrot",
	"Gulf", "Hotel", "India", "Juliet", "Kilo", "Lima", "Mike",
	"November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra",
	"Tango", "Uniform", "Victor", "Whiskey", "Xray", "Yankee",
	"Zulu"};

cout << "Please enter a phrase to convert to ICAO"; //prompt user input
getline(cin, word); //gets user input

stringlen = word.length(); //gets the length of the string inputted by user

if(isalpha(word[i])) //isalpha ensures all user input is alphabet only
{   //for loop that cycles through array until it is no longer less or equal to input length
	for( i = 0; i <= word.length(); i++)
	{
		char letter;
		string convert;
		
		letter = word[i]; //takes string and converts it to character
		letter = toupper(letter); //this makes all input to uppercase letters
		convert = ICAO[letter - 'A']; //takes value of character and subtracts A to find value in array

		cout << convert; //cannot seem to seperate output by character, will find out later
	}
}
else
{
	cout << "Invalid option";
}
return 0;
}