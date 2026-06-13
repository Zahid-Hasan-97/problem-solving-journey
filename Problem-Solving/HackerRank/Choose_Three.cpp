#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n, s;
        cin >> n >> s;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool possible = false;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {

                    if (a[i] + a[j] + a[k] == s)
                    {
                        possible = true;
                        break;
                    }
                }
                if (possible == true)
                {
                    break;
                }
            }
            if (possible == true)
            {
                break;
            }
        }

        if (possible == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}