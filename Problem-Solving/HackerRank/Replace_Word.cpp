#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, x;

        cin >> s >> x;

        int pos;

        while (true)
        {
            pos = s.find(x);

            if (pos == -1)
            {
                break;
            }

            s.erase(pos, x.size());

            s.insert(pos, "#");
        }

        cout << s << endl;
    }

    return 0;
}