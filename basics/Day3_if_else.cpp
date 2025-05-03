#include <iostream>
using namespace std;

int main()
{
    // declearing variable and getting age
    int age;
    cout << "enter you age : ";
    cin >> age;

    // using if esle statement to check the eligibility for user to vote
    if (age > 18)
    {
        cout << "you are eligiable to vote\n"; // if user is eligiable
    }
    else
    {
        cout << "you aer underage and cannot vote\n"; // if user is not eligiable
    }

    return 0;
}