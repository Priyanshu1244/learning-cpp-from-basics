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
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << "\n";
    }

    return 0;
}