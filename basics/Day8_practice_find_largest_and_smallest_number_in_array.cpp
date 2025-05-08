#include <iostream>
using namespace std;

int main()
{

    int array[10] = {34, 43, 45, 62, 12, 65, 74, 47, -85, 95};

    int largest = array[0];
    int smallest = array[0];

    // finding the largest number in array
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    // finding the smallest number in array
    for (int i = 0; i < 10; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }

    // printing the smallest and the largest number in array
    cout << "the largest number in array is : " << largest << endl;
    cout << "the smallest number in array is : " << smallest << endl;

    return 0;
}