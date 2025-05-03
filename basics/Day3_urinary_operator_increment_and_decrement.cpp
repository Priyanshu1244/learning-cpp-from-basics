#include <iostream>
using namespace std;

int main()
{

    int i = 10; // intializing variable

    // urinary operator requires only one operand
    // there are mainly two type of urinary operator (1> increment and 2> decrement)

    // increment operator (increase the vlaue by 1)

    cout << ++i << endl; // pre increment (first increase the value by 1 then prints it)  i = 11

    cout << i++ << endl; // post increment (first print the value then increase it by 1)  i = 12

    cout << i << endl; // current value of i

    // decrement operator (decrease the vlaue by 1)

    cout << --i << endl; // pre increment (first increase the value by 1 then prints it)  i = 11

    cout << i-- << endl; // post increment (first print the value then increase it by 1)  i = 12

    cout << i << endl; // final value of i
}