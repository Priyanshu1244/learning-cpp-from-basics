#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "enter a number (1-7) to know its corresponding day : ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thrusday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
        cout << "invalid input";
        break;
    }

    return 0;
}