#include <iostream>

using namespace std;

int main()
{
    string str1;
    string str2;
    string str3;

    cout << "Enter your full name:";
    cin >> str1;
    // Need something on this line to work correctly. What? Why?
    cout << "You entered: " << str1 << endl;

    cout << "Try again: ";
    getline(cin, str2);
    cout << "You entered: " << str2 << endl;

    cout << "One more time";
    cin.getline(str3, 80);      // This line is going to fail. Why?
    cout << "You entered: " << str3 << endl;

    return 0;
}
