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
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (num+1)-i ; k++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}