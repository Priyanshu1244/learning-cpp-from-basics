#include <iostream>
using namespace std;

int main()
{

    // terniary operator is a shorthand method to use if else statement, used when logic is very simple

    // syntax : condition? code if TRUE : code if FALSE ;

    // declearing variable and getting input from user
    int number;
    cout << "enter to number to check if its even or odd : ";
    cin >> number;

    // check for even and odd using ternary operator
    (number % 2 == 0) ? cout << "number is even\n" : cout << "number is odd\n";

    return 0;
}