#include <iostream>
using namespace std;

int sum(int arr[]);
int product(int arr[]);

int main()
{

    int arr[10];

    cout << " enter elements in array. \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "enter " << i << " term of array : ";
        cin >> arr[i];
    }

    cout << " the elements in array is : \n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "\n \n";

    int total = sum(arr);
    int prod = product(arr);
    cout << "the sum of all the elements of array is : " << total;
    cout << "\nthe product of all the elements of array is : " << prod;

    return 0;
}

int sum(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int product(int arr[])
{
    int product = 1;
    for (int i = 0; i < 10; i++)
    {
        product = product * arr[i];
    }
    return product;
}