#include <iostream>
using namespace std;

int main()
{

    // creating variables
    int age;
    float height;
    int number;

    // getting values as input for these variables from user
    cout << "enter you age : ";
    cin >> age;
    cout << "enter you height (in feets & inches) : ";
    cin >> height;
    cout << "enter you user number : ";
    cin >> number;

    // printing these details
    cout << "your age is " << age << endl;
    cout << "your height is " << height << "feet" << endl;
    cout << "your user number is " << number << endl;

    return 0;
}