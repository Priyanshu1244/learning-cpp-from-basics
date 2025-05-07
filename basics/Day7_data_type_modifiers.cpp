#include <iostream>
using namespace std;

int main()
{
    short int x ;
    cout<<sizeof(x)<<endl;

    long int y ;
    cout<<sizeof(y)<<endl;

    long long int z;
    cout<<sizeof(z)<<endl;

    unsigned int a = 12; // now this variable cannot store negative number, as MSB logic is removed for this variable
    cout<<a<<endl;

    //variables are signed as default means they are made to store both -ve and +ve value
    int b;
    signed int c; //still can make signed variable manually too
    b= 7 ; c = - 15;
    cout<<b<<" and "<<c<<endl;
    
    return 0;
}