#include <iostream>
using namespace std;

int main()
{

    // declearing variable and getting input from user
    int num;
    cout << "enter the number  : ";
    cin >> num;

    // printing the pattern using nested loop

    for (int i = 1; i <= num; i++)
    { // loop for row

        for (int j = 1; j <= num; j++)
        { // loop for column
            cout << "* ";
        }

        cout << '\n';
    }

    return 0;
}