#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int cls;
    int roll;
    double gpa;

    student(int roll, int cls, double gpa)
    {
        this->.roll = roll;
        this->.cls = cls;
        this->.gpa = gpa;
    }
};

int main()
{
    student rahim(45,5,3.2);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    return 0;
}