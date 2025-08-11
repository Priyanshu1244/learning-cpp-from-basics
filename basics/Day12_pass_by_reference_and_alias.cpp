#include<iostream>
using namespace std;

void passbyvalue(int a);
void passbyreference(int* a);
void alias(int &number); 


int main(){

    int a = 50;


    cout<<"original value of a : "<<a<<endl;
    passbyvalue(a);
    cout<<"value of a after pass by value : "<<a<<endl;
    passbyreference(&a);
    cout<<"value of a after pass by reference : "<<a<<endl; 
    alias(a); 
    cout<<"value of a after using alias to make change : "<<a<<endl;


    return 0;
}

void passbyvalue(int a){  //this won't make any change in value of a because it has only a copy of a.
    a = 100;
}
void passbyreference(int* a){  //this will change the value of a because it has address of a not a copy of a.
    *a = 100;
}

void alias(int &number){
    number = 200;
}
