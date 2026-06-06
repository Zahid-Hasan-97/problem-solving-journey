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

student fun()
{
    student rahim(2, 5, 5.00);

    return rahim;
}

int main()
{
    student rahim(45, 5, 3.2);

    student obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}