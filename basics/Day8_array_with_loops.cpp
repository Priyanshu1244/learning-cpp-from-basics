#include <iostream>
using namespace std;

int main()
{

    // declearing an array
    int array_1[10];

    //getting input from user using loops
    cout<<"enter 10 values to fill array :\n";
    for(int i = 0 ; i<10 ; i++){
        cin>>array_1[i];
    }
    
    //printing the values user entered using loops
    cout<<"the values are : \n";
    for(int i = 0 ; i<10 ; i++){
       cout<<array_1[i]<<endl;
    }
    
    return 0;
}