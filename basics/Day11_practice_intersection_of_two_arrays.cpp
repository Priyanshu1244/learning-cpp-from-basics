#include <iostream>
using namespace std;

int main()
{

    int arr1[10];
    int arr2[10];

    // filling elements in array
    cout << "enter elements in  1st array : \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "enter " << i << " term of array : ";
        cin >> arr1[i];
    }

    cout << "enter elements in 2nd array : \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "enter " << i << " term of array : ";
        cin >> arr2[i];
    }

    cout << "\n\n";

    // printing the array
    cout << "the elements in  1st array is : \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << "  ";
    }

    cout << endl;

    cout << "the elements in 2nd array is : \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << "  ";
    }
    cout << "\n\n";

    // finding unique elements and printing them
    cout << "common elements in 1st and 2nd array are : \n";


    //checking for common elements while aslo handling dublicates
    for (int i = 0; i < 10; i++)
    {

        int dublicate = 0;

        for (int index = 0; index < i; index++)
        {
            if (arr1[i] == arr1[index])
            {
                dublicate = 1;
                break;
            }
        }

        if (dublicate)
        {
            continue;
        }
        else
        {

            for (int j = 0; j < 10; j++)
            {
                if (arr1[i] == arr2[j])
                {
                    cout << arr1[i] << "  ";
                    break;
                }
            }
        }
    }

    cout << endl;
    return 0;
}