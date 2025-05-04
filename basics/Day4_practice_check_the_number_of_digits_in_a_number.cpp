#include <iostream>
using namespace std;

int main()
{

    // declearing variables and getting input from user
    int number;
    cout << "enter a number : ";
    cin >> number;

    // checking whether the number is 0 or -ve
    int count = 0;
    if (number < 0)
    {
        number = -(number);
    }
    else if (number == 0)
    {
        count = 1;
        cout << "there is only 1 digit in the given number\n";
    }

    // calculation the digits and printing them
    if (count != 1)
    {
        while (number > 0)
        {
            number = number / 10;
            count++;
        }
        cout << "there are " << count << " digits in given number\n";
    }
   
}