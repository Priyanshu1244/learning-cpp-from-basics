#include <iostream>
using namespace std;

int main()
{

    // declearing variables and getting input from user
    int a, b;
    int binaryXOR;
    cout << "enter first number : ";
    cin >> a;
    cout << "enter second number : ";
    cin >> b;

    // using binary '&' AND operator
    binaryXOR = (a ^ b);

    // printing the final answer
    cout << "the binary XOR for 1st and 2nd number will be : " << binaryXOR;

    return 0;
}