#include <iostream>
using namespace std;

int main()
{
    // declearing variable and getting input from user
    int num;
    cout << "enter the number  : ";
    cin >> num;
    int n = 1;

    // using nested for loop to print the pattern
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
            n++;
        }
        cout << "\n";
    }

    return 0;
}