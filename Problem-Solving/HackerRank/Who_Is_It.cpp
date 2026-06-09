#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char sec;
    int marks;

    Student(int i, string n, char s, int m)
    {
        id = i;
        name = n;
        sec = s;
        marks = m;
    }
};

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int id;
        string name;
        char sec;
        int marks;

        cin >> id >> name >> sec >> marks;
        Student s1(id, name, sec, marks);

        cin >> id >> name >> sec >> marks;
        Student s2(id, name, sec, marks);

        cin >> id >> name >> sec >> marks;
        Student s3(id, name, sec, marks);

        Student highest = s1;
    
        if (s2.marks > highest.marks)
        {
            highest = s2;
        }
        else if (s2.marks == highest.marks && s2.id < highest.id)
        {
            highest = s2;
        }

        if (s3.marks > highest.marks)
        {
            highest = s3;
        }
        else if (s3.marks == highest.marks && s3.id < highest.id)
        {
            highest = s3;
        }

        cout << highest.id << " " << highest.name << " " << highest.sec << " " << highest.marks << endl;
    }

    return 0;
}