#include <iostream>
using namespace std;

int main()
{

    // declearing variables and getting input from user
    int a, b;
    int binaryOR;
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;

    // using binary '|' OR operator
    binaryOR = (a | b);

    // printing the final answer
    cout << "the binary OR for 1st and 2nd number will be : " << binaryOR;

    return 0;
}