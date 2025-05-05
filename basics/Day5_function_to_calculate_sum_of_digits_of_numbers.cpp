#include <iostream>
using namespace std;

int digitsum(int num);

int main()
{

    int num;
    cout << "enter the number to get sum of its digits : ";
    cin >> num;

    int sum;
    sum = digitsum(num);

    cout << "the sum of its digits is : " << sum << endl;

    return 0;
}

int digitsum(int num)
{
    int sum = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}