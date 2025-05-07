#include <iostream>
using namespace std;

int main()
{

    // declearing and intializing variables
    int a, b, c, d;
    a = 2;
    b = 5;
    c = 3;
    d = 4;

    int ans;

    ans = a + b * c - d; // its equal to a+(b*c)-d according to C++ operator precendence
    cout << ans << endl;

    ans = d * b % a;     // if different operator with same precedence are present then associativity rule will be followed
    cout << ans << endl; // calculation will take place left to right

    // NOTE : these rules are only followed in absence of parenthsis '()'

    return 0;
}