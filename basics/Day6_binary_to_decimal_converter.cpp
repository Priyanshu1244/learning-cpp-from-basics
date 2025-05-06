#include <iostream>
using namespace std;

int main()
{

    // deleaing variables and getting input form user
    int binary;
    cout << "enter binary number : ";
    cin >> binary;

    // initializing variables and loop
    int digit, value;
    int decimal = 0;
    int twopow = 1;

    while (binary > 0) // loop to convert binary into decimal
    {

        digit = binary % 10;

        if (digit != 0 && digit != 1)
        { // validates that inputs are only in binary form
            cout << "invalid input!! only 0 and 1 are allowed as input\n";
            return 0;
        }

        value = digit * twopow;

        decimal = decimal + value;

        twopow = twopow * 2;

        binary = binary / 10;
    }

    // printing final decimal value
    cout << decimal << endl;

    return 0;
}