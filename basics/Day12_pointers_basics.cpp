#include <iostream>
using namespace std;

int main()
{
    int a = 10; // creating a int type variable

    // address of operator
    cout << &a << endl; // printing its address using adress of operator (&)

    // pointer variable
    int *pointer = &a; // storing adress of a in pointer variable then printing it
    cout << pointer << endl;

    // derefercing operator
    cout << *(&a) << endl;    // dereferencing operator / value at address operator (prints the value stored at given address)
    cout << *pointer << endl; // works both with pointer variable and address of operator

    // null pointer (points to nothing , and the address it stores is absolute zero) , they are mostly used with in linked list and trees
    int *nullpointer = NULL;     // syntax to create null pointer
    cout << nullpointer << endl; // prints zero

    // pointer to pointer variable  (stores the address of pointer varaibles)
    int **parentpointer = &pointer;   //syntax to create a pointer to pointer variable
    cout << &parentpointer << endl;   //prints the address of this parentpointer variable
    cout << parentpointer << endl;    //prints the address of pointer which is holding the address of a
    cout << *parentpointer << endl;   //prints the address of a because that's what pointer in holding
    cout << **parentpointer << endl;  //prints the value of a
}