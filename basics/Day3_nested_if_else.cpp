#include <iostream>
using namespace std;

int main()
{

    // declearing variable and getting age as input from user
    int age;
    cout << "enter you age : ";
    cin >> age;

    // creating a nested loop to print different outputs according to user's age
    if (age < 0)
    {
        cout << "invalid input, age can't be in negative\n";
    }
    else
    {
        if (age < 16)
        {
            cout << "you are underage and cannot hold learner or driving license\n";
        }
        else
        {

            if (age < 16)
            {
                cout << "you are eligiable for learners license only\n";
            }
            else
            {
                if (age < 60)
                {
                    cout << "you are an adult and can apply for driving licenese\n";
                }
                else
                {
                    if (age < 75)
                    {
                        cout << "you are an senior citizen and eligiable for driving license\n";
                    }
                    else
                    {
                        cout << "you are overaged and cannot hold a driving license anymore\n";
                    }
                }
            }
        }
    }

    return 0;
}