#include<bits/stdc++.h>
using namespace std;

// class student
// {
//     public:
//     char name [100];
//     int roll;
//     double gpa;
// };


// int main()
// {   

//     student a;

//     a.roll = 10;
//     a.gpa = 5;
//     // a.name = Sakib;
//     char temp[100] = "Sakib";
//     strcpy(a.name, temp);
    
//     cout << a.name << " " << a.roll << " " << a.gpa << endl;

//     return 0; 
// }

class student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{

    student a, b;

    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;

    cin.ignore();
    //getchar();

    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;

    return 0;
}