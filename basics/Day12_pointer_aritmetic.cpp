#include<iostream>
using namespace std;

int main(){

    int x = 5;

    int *pointer = &x;

    //pointer increment and decrement (it adds or subtract on size of its datatype (4 in case of int))
    cout<<++pointer<<endl;
    cout<<--pointer<<endl;  

    //addition is no possible with pointers but subtration is
    int* pointer2 = pointer + 2;
    cout<<pointer2-pointer<<endl; // ans = 2 , which is the number of intgers it can store between in that difference

    //all relation operators can work with pointer
    cout<<(pointer==pointer2)<<endl;
    cout<<(pointer<pointer2)<<endl;
    return 0;
}