#include <iostream>
using namespace std;

int main()
{

    //declearing variables and getting input
    int num, expo;
    cout << "enter the number : ";
    cin >> num;
    cout << "enter the exponent on number : ";
    cin >> expo;

    //intializing variables and running the while loop to calculate answer
    int result = 1;
    int i = 1;
    while (i <= expo)
    {
        result = num * result;
        i++;
    }

    //printing the answer
    cout << "the value of "<<num<<"^"<<expo<<" is : "<<result << endl;

    return 0;
}