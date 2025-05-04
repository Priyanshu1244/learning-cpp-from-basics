#include<iostream>
using namespace std;

int main(){

    //declearing variables and getting input from user
    int number;
    cout<<"enter a number to check its largest digit : ";
    cin>>number;


    //checking if the number is -ve
    int original;
    original = number;
    if(number<0){
        number = - (original);
    }

    int digit;
    int largest_digit = 0;

    while(number>0){
        digit = number%10;
        if(digit>largest_digit){
            largest_digit=digit;
        }else{
            largest_digit = largest_digit;
        }
        
        number = number/10;    
    }

    cout<<largest_digit<<" is the largest digit in "<<original<<endl;
}