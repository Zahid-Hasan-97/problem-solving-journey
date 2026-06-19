#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
    int math;
    int eng;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math >> a[i].eng;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int total_i = a[i].math + a[i].eng;
            int total_j = a[j].math + a[j].eng;

            if (total_i < total_j)
            {
                Student temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else if (total_i == total_j)
            {
                if (a[i].id > a[j].id)
                {
                    Student temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }

    return 0;
}