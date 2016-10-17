#include <string>
#include <iostream>


using namespace std;

void ICAO(char);
string normWord,newWord;
char ICAOLetter;
int istart, wordLength;
int main()
{
	cout << "Please enter a phrase to convert to ICAO\n"  << endl;
	getline(cin, normWord);
	wordLength = normWord.length();

    cout << "\n";

	istart = 0;
	while(istart <= wordLength - 1)
		{
			newWord = normWord.substr(istart, 1);
			ICAOLetter = newWord[0];
			if(isalpha(ICAOLetter)==0)
				{
					cout << "Will skip this character" << ICAOLetter << endl;
				}
			else{
				ICAO(ICAOLetter);
				istart=istart + 1;
				}
		}


return 0;
}

void ICAO(char ICAOletter)
{    switch (ICAOletter)
        {
        case 'A': case 'a': cout << "Alpha ";
        break;
        case 'B': case 'b': cout << "Bravo ";
        break;
        case 'C': case 'c': cout << "Charlie ";
        break;
        case 'D': case 'd': cout << "Delta ";
        break;
        case 'E': case 'e': cout << "Echo ";
        break;
        case 'F': case 'f': cout << "Foxtrot ";
        break;
        case 'G': case 'g': cout << "Golf ";
        break;
        case 'H': case 'h': cout << "Hotel ";
        break;
        case 'I': case 'i': cout << "India ";
        break;
        case 'J': case 'j': cout << "Juliet ";
        break;
        case 'K': case 'k': cout << "Kilo ";
        break;
        case 'L': case 'l': cout << "Lima ";
        break;
        case 'M': case 'm': cout << "Mike ";
        break;
        case 'N': case 'n': cout << "November ";
        break;
        case 'O': case 'o': cout << "Oscar ";
        break;
        case 'P': case 'p': cout << "Papa ";
        break;
        case 'Q': case 'q': cout << "Quebec ";
        break;
        case 'R': case 'r': cout << "Romeo ";
        break;
        case 'S': case 's': cout << "Sierra ";
        break;
        case 'T': case 't': cout << "Tango ";
        break;
        case 'U': case 'u': cout << "Uniform ";
        break;
        case 'V': case 'v': cout << "Victor ";
        break;
        case 'W': case 'w': cout << "Whiskey ";
        break;
        case 'X': case 'x': cout << "Xray ";
        break;
        case 'Y': case 'y': cout << "Yankee ";
        break;
        case 'Z': case 'z': cout << "Zulu ";
        break;
}
}
