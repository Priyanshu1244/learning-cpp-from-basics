#include<iostream>
using namespace std;

int main(){

    //declaring variabale and getting input from user
    char ch;
    cout<<"enter a charactere to know if its uppercase or lowercase\n";
    cin>>ch;

    //checking character case using ascii table logic and printing the answer
    if(ch>=49&&ch<=74){
        cout<<ch<<" is a uppercase character\n";
    }else if(ch>=97&&ch<=122){
        cout<<ch<<" is a lowercase character\n";
    }else{
        cout<<ch<<" is not a alphaber character\n";
    }

    return 0;
}