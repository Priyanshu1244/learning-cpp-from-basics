#include <iostream>
using namespace std;

int main()
{

    // declearing variables and getting input from user
    int a, b;
    int binaryAND;
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;

    // using binary '&' AND operator
    binaryAND = (a & b);

    // printing the final answer
    cout << "the binary AND for 1st and 2nd number will be : " << binaryAND;

    return 0;
}