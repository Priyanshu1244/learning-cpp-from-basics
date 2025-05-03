#include <iostream>
using namespace std;

int main()
{

    // declearing varibles and getting input from user
    int num;
    cout << "enter the number whose table you want to print : ";
    cin >> num;

    //running for loop to print table of given number
    for(int i = 0 ; i <= 9; i++){
        cout<<num<<" x "<<i+1<<" = "<<num*(i+1)<<endl;
    }

    return 0 ;
}