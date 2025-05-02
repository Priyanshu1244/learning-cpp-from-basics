#include <iostream>
using namespace std;

int main()
{

    // declearing variables
    int num1, num2;

    // getting input from user
    cout << "enter first number : ";
    cin >> num1;
    cout << "enter second number : ";
    cin >> num2;

    // performing different operations using arthmetic operators
    cout << "the sum of both numbers is : " << num1 + num2 << endl;
    cout << "the difference of both numbers is : " << num1 - num2 << endl;
    cout << "the product of both numbers is : " << num1 * num2 << endl;
    cout << "the value of first number divided by second number is : " << (float) num1 / num2 << endl;
    cout << "the remainder after ffirst number get divided by second number is : " << num1 % num2 << endl;

    return 0;
}