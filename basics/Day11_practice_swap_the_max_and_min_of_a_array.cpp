#include <iostream>
using namespace std;

int main()
{

    int array[10] = {34, 43, 45, 62, 12, 65, 74, 47, -85, 95};

    int largest = array[0];
    int smallest = array[0];

    //printing the array before swaping
    cout<<"the array is : ";
    for(int i = 0 ; i<10 ; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";

    int x = 0 ;
    int y = 0 ;

    // finding the largest number in array
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
            x = i;
            
        }
    }

    // finding the smallest number in array
    for (int i = 0; i < 10; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
            y = i;
        }
    }

    int temp;
    temp = array[x];
    array[x] = array[y];
    array[y] = temp;

     //printing the array after swaping
    cout<<"the array is : ";
    for(int i = 0 ; i<10 ; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";

    return 0;
}