#include <iostream>
using namespace std;

int main()
{
    char s[100]; // Built in string function -- string s;

    // cin.ignore();

    // cin >> s;

    cin.getline(s,100); // Taking input with space

    cout << s << endl;

    return 0;
}
