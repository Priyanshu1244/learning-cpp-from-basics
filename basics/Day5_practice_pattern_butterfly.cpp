#include <iostream>
using namespace std;

int main()
{

    // declearing variables and getting input
    int num;
    cout << "enter a number : ";
    cin >> num;


    
    // printing the butter fly pattern using nested loops

    for (int i = 1; i <= num; i++)  // for upper part of butterfly
    { 
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= (2 * num) - (2 * i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= num; i++)  // for lower part of butterfly
    { 
        for (int j = 1; j <= num - (i - 1); j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= num - (i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}