#include <iostream>
using namespace std;

int main()
{

    // declearing variables and getting input from user
    int a, b;
    cout << "enter the number : ";
    cin >> a;
    cout << "enter enter how many times you want to shift the number to the right : ";
    cin >> b;

    // shifint the number to the right given times
    int rightshift = (a >> b);

    // printing the final value
    cout << "the value of << " << a << " after shifting it to right " << b << " times is : " << rightshift << endl;

    return 0;
}