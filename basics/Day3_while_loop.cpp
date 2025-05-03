#include <iostream>
using namespace std;

int main()
{

    // declearing varibles and getting input from user
    int num;
    cout << "enter the number till you want to print counting : ";
    cin >> num;

    // intializing i
    int i = 1;

    // running while loop to print number upto num
    while (i <= num)
    {
        cout << i << "\n";

        i++; // incrementing i by 1 after printing the number
    }

    return 0;
}