#include <iostream>
using namespace std;

int main()
{
    // declearing variables and getting input from user
    int sum = 0;
    int digit;
    int number;
    cout << "enter a 3 digit number : ";
    cin >> number;

    int original = number;

    // running loop to get digits of number one by one then adding the cube of them
    while (number > 0)
    {
        digit = number % 10;
        sum = sum + digit * digit * digit;
        number = number / 10;
    }

    // comparing our sum and user number and telling the answer according to the question
    if (sum == original)
    {
        cout << original << " is a armstrong number\n";
    }
    else
    {
        cout << original << " is not a armstrong number\n";
    }

    return 0;
}