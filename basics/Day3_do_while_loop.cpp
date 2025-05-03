#include <iostream>
using namespace std;

int main()
{
    // decleaing variable and getting input from user
    int number;
    cout << "enter the number till you want to print the sum of natural number\n";
    cin >> number;

    // intilizing sum and i
    int sum, i;
    sum = i = 0;

    // updating sum till the i reach number
    do
    {
        sum = sum + i;
        i++;
    } while (i <= number);

    // printing final sum
    cout << "the sum is : " << sum << endl;

    return 0;
}