#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>vec(10,5);

    for(int value : vec ){
        cout<<value<<"  ";
    }

    cout<<"\n";
    
    return 0;
}