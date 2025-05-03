#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d;
    a = b = 5;
    c = d = 10;

    // AND operator (TRUE if both conditions are true)
    cout << ((a == b) && (a < c)) << endl; // TRUE as both are true
    cout << ((a == b) && (a > c)) << endl; // FALSE as only one of them is true
    cout << ((a == c) && (a > d)) << endl; // FALSE as both are false

    // OR operator (TRUE if any one of conditions are true)
    cout << ((a == b) || (a < c)) << endl; // TRUE as both are true
    cout << ((a == b) || (a > c)) << endl; // FALSE as only one of them is true
    cout << ((a == c) || (a > d)) << endl; // FALSE as both are false

    // NOT operator (reverse the output)
    cout << (!((a == b) && (a < c))) << endl; // FALSE as condition is ture but OR will reversed the output
    cout << (!((a == b) && (a > c))) << endl; // TRUE as condition is false but OR will reversed the output
    cout << (!((a == c) && (a > d))) << endl; // TRUE as condition is false but OR will reversed the output

    return 0 ;
}