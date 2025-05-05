#include <iostream>
using namespace std;

int sum(int num1, int num2); // int type function to return the sum

int main()
{

    // declaring variables and getting input
    int num1, num2;
    cout << "enter first number : ";
    cin >> num1;
    cout << "enter second number : ";
    cin >> num2;

    int total = sum(num1, num2); // calling function and storing the sum returned by function

    cout << "the sum of both numbers are : " << total << endl; // printing the sum
}

// function definition
int sum(int num1, int num2)
{
    int total;
    total = num1 + num2;
    return total;
}