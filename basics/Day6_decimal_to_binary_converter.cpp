#include <iostream>
using namespace std;

int main()
{

    int decnum;
    cout << "entet a number to get its binary form : ";
    cin >> decnum;

    int tenpowers = 1;
    int remainder, binary;
    int i = 0;
    cout << "its binary form will be : ";

    if (decnum == 0 || decnum == 1)
    {
        cout << decnum << endl;
    }
    else
    {
        binary = 0;
        int value;

        while (decnum != 0)
        {
            remainder = decnum % 2;
            value = remainder * tenpowers;
            tenpowers = tenpowers * 10;

            binary = binary + value;

            decnum /= 2;
            i++;
        }
        cout << binary;
    }

    cout << endl;

    return 0;
}