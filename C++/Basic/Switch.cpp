#include <iostream>
using namespace std;

int main()
{
    int day;
    cin >> day;

    switch(day)
    {
        case 1 :// if(day == 1)
            cout << "Saturday\n";
            break;

        case 2: // else if(day == 2)
            cout << "Sunday\n";
            break;

        case 3 : 
            cout << "Monday\n";
            break;
        
        default:
            break;
    }

    int x;
    cin >> x ;

    switch (x%2)
    {
    case  0:
        cout << "Even\n";
        break;

    case 1 : 
        cout << "Odd\n";
        break;
    
    default:
        break;
    }

    return 0;
}