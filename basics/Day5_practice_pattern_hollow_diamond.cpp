#include <iostream>
using namespace std;

int main()
{

    // declearing variables and getting input
    int num;
    cout << "enter a number : ";
    cin >> num;

    // printing upper triangel of pattern
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 1; j <= (2 * i) - 3; j++)
        {
            cout << " ";
        }
        if (i != 1)
        {
            cout << "*";
        }
        cout << endl;
    }

    // printing lower triangle of pattern
    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 1; j < 2 * (num - i) - 2; j++)
        {
            cout << " ";
        }
        if (i != (num - 1))
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}