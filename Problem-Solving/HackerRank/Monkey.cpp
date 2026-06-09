#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[100005]; 

    while (cin.getline(s, 100005)) {
        
        int counts[26] = {0}; 

        for (int i = 0; s[i] != '\0'; i++) {

            if (s[i] >= 'a' && s[i] <= 'z') {

                counts[s[i] - 'a']++; 
            }
        }

        for (int i = 0; i < 26; i++) {

            for (int j = 0; j < counts[i]; j++) {
                cout << (char)(i + 'a');
            }
        }
        cout << endl;
    }

    return 0;
}