#include <iostream>
using namespace std;

int a = 10; // global variable (can be accessed by main and any other function)

void printa()
{
    cout << a << endl; // function using a
}

int main()
{
    cout << a << endl; // main using a

    printa();
    int i = 0; // this i can be accesed only inside main funtion

    for (int i = 0; i <= 10; i++)
    {
        cout << "value of i in loop is : " << i << endl; // this i completely different and only valid or accesed inside this loop
    }

    cout << "value of i outside the loop is : " << i << endl; // main funtion i (not the loop one)

    return 0;
}