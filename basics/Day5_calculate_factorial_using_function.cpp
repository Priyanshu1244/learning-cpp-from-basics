#include <iostream>
using namespace std;

int fac(int n);  //function prototype

int main()
{
    //declearing variables and getting input
    int n;
    cout << "enter a number to find its factorial : ";
    cin >> n;

    //calling function to get factorail
    int fact = fac(n);

    //printing factorial
    cout<<"the factorial of "<<n<<" is "<<fact<<endl;

    return 0;
}

//function defination
int fac(int n){

    int fact = 1;

    for(int i = 1 ; i<=n ; i++){  //loop to calculate factorial
        fact *= i;
    }

    return fact; //returning factorial
}