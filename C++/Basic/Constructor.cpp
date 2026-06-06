#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int cls;
    int roll;
    double gpa;

    student(int r , int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // student rahim(45,5,3.2);

    int r , c;
    double g;

    cin >> r >> c >> g;

    student rahim(r, c, g);
    
    return 0;
}