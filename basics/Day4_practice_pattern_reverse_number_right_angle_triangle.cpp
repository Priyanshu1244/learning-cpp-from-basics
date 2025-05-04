#include <iostream>
using namespace std;

int main()
{

    // declearing variable and getting input from user
    int num;
    cout << "enter the number  : ";
    cin >> num;

    // using nested for loop to print the pattern
    for (int i = 1; i <= num; i++)
    {
        int n = i;
        for (int j = 1; j <= i; j++)
        {
            cout << n << " ";
            n--;
        }
        cout << endl;
    }

    return 0;
}