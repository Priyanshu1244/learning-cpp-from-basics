#include <iostream>
using namespace std;

int main()
{

    // relational operators used to check relation between variables
    // return 0 or 1 (0->false , 1->true)

    int ans; // will store 0 or 1 according to relation between numbers

    // check if two number are EQUAL or not
    ans = (5 == 5);
    cout << ans << endl; // true (1) in this case
    ans = (5 == 3);
    cout << ans << endl; // false (0) in this case

    // check if two number are NOT EQUAL or not
    ans = (5 != 3);
    cout << ans << endl; // true (1) in this case
    ans = (5 != 5);
    cout << ans << endl; // false (0) in this case

    // check if first number is SMALLER than the second
    ans = (5 < 10);
    cout << ans << endl; // true (1) in this case
    ans = (5 < 3);
    cout << ans << endl; // false (0) in this case

    // check if first number is GREATER than the second
    ans = (5 > 3);
    cout << ans << endl; // true (1) in this case
    ans = (5 > 10);
    cout << ans << endl; // false (0) in this case

    // check if first number is LESSER THAN OR EQUAL TO the second number
    ans = (5 <= 5);
    cout << ans << endl; // true (1) in this case
    ans = (5 <= 3);
    cout << ans << endl; // false (0) in this case

    // check if first number is GREATER THAN OR EQUAL TO the second number
    ans = (5 >= 5);
    cout << ans << endl; // true (1) in this case
    ans = (5 >= 10);
    cout << ans << endl; // false (0) in this case

    return 0;
}