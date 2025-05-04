#include <iostream>
using namespace std;

int main()
{

    // declearing variable and getting input from user
    int percentage;
    cout << "enter you overall percentage in exam : ";
    cin >> percentage;

    // telling user his grade according to his percentage
    if (percentage < 0 || percentage > 100)
    {
        cout << "invalid input for percentage\npercentage must be between 1 and 100\n";
    }
    else if (percentage > 90)
    {
        cout << "congratulations!!! you got an A+\n";
    }
    else if (percentage > 80)
    {
        cout << "congratulation!! you got an A\n";
    }
    else if (percentage > 60)
    {
        cout << "you got a B\n";
    }
    else if (percentage > 40)
    {
        cout << "you got a C\n";
    }
    else if (percentage > 33)
    {
        cout << "you got a D\n";
    }
    else
    {
        cout << "you are failed and got a F\n";
    }

    return 0;
}
