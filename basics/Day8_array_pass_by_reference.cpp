#include <iostream>
using namespace std;

void valuechange(int array[]); // funciton prototype

int main()
{

    int array[3] = {2, 5, 7}; // old values of array

    valuechange(array);

    // printing new values of array
    cout << "the new values in array are : \n";

    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;

    return 0;
}

void valuechange(int array[])
{ // this funtion will change the value of elements of array in main funtion as its paas by reference

    cout << "enter new values in array :\n";

    for (int i = 0; i < 3; i++)
    {
        cin >> array[i]; // inputing new values
    }
}