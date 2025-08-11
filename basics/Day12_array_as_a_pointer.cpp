#include<iostream>
using namespace std;

int main(){

    int array[5] = {1,2,3,4,5};  //array is also pointer which always point toward the first index of array

    cout<<array[0]<<endl;  //both will print the same value as they both points towards the same address
    cout<<*array<<endl;


    cout<<"printing value in array using a pointer : "<<endl;
    int* pointer = array;
    cout<<*(pointer)<<endl;    // index 0 of array
    cout<<*(++pointer)<<endl;  // index 1 of array
    cout<<*(++pointer)<<endl;  // index 2 of array
    cout<<*(++pointer)<<endl;  // index 3 of array
    cout<<*(++pointer)<<endl;  // index 4 of array
    // cout<<*(pointer++)<<endl;  // index 0 of array

    return 0;
}