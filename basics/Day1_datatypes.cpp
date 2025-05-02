#include <iostream>
using namespace std;

int main()
{

    // creating and initailizing variables of different datatypes


    int a = 5; // integer type, size : 4 bytes (whole number)

    float f = 8.3250; // float type, size : 4 bytes (numbers and decimals)

    double d = 34.432943028; // double type, size : 8 bytes (also store numbers and decimals but its size id double than float, hence it can store larger number than float)

    char c = '$'; // character type, size : 1 bytes (store a character)

    bool codeiscorrect = true; //bollean type, size : 1 bytes (for true and false, true -> 1 and false -> 0)


    // printing the values of these datatypes
    cout << "the value of integer is " << a << endl;
    cout << "the value of float is " << f << endl;
    cout << "the value of double is " << d << endl;
    cout << "the value of char is " << c << endl;
    cout << "the value of bool is " << codeiscorrect << endl;

    
    cout << boolalpha; //if want ot print true or false instead of 0 and 1
    cout << "the value of bool is " << codeiscorrect << endl;

    return 0;
}