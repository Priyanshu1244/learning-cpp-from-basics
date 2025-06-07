#include <iostream>
using namespace std;

int main()
{

    int arr[10]; // creating array

    // getting elements of array and printing them
    for (int i = 0; i < 10; i++)
    {
        cout << "enter " << i << " term of array : ";
        cin >> arr[i];
    }
    cout << "elements of the array are : \n";
    for (int i = 0; i < 10; i++)
    {

        cout << arr[i] << "  ";
    }
    cout << "\n\n";



    // finding unique elements
    cout << "unique elements (appeared only once) are : \n";

    for (int i = 0; i < 10; i++)
    {

        int count = 0;

        for (int j = 0; j < 10; j++)
        {

            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                continue;
            }
        }

        if (count == 1)
        {
            cout << arr[i] << "  ";
        }
    }

    cout<<endl;

    return 0;
}