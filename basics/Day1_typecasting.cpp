#include <iostream>
using namespace std;

int main()
{

    // implicit type conversion (automatic & done by the compiler)
    // happens when small datatype has to be stored in a big data type

    char small = 'A';
    int big;
    big = small;
    cout << "implicit : " << big << endl;


    
    // explicit type conversion (manual & done by the programmer)
    // happens when big datatypes has to be stored in a small datatype

    float big_datatype = 56.243;
    int small_datatype;
    small_datatype = (int)big_datatype;
    cout << "explicit : " << small_datatype << endl;


    return 0;
}
