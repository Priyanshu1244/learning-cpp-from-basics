#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> nums = {10, 20, 30, 40, 50};

    // size function (gives the number of elements sotred in the vector , 5 in this case)
    cout << "size of vector : " << nums.size() << endl;

    // push_back function (used to store values in the right most index vector)
    nums.push_back(60);
    nums.push_back(70);
    nums.push_back(80);
    nums.push_back(90);
    nums.push_back(100);

    cout << "vector after pusing more new values in it : ";
    for (int value : nums)
    {
        cout << value << "  ";
    }
    cout << "\n";

    // pop_back funtion (used to remove values from the right most index of vector)
    nums.pop_back();
    nums.pop_back();
    nums.pop_back();
    nums.pop_back();
    nums.pop_back();

    cout << "Vector after using pop back funtion : ";
    for (int value : nums)
    {
        cout << value << "  ";
    }
    cout << "\n";

    // fornt funtion (gives the value at first index of a vector)
    cout << "value at first index of vector is : " << nums.front() << endl;

    // back funtion (gives the value at the last index of a vector)
    cout << "value at last index of vector is : " << nums.back() << endl;

    // at function (gives the value for particular index of vector)
    cout <<"the value sotred in 1st index of vector is : "<< nums.at(1) <<endl;
    cout <<"the value sotred in 2nd index of vector is : "<< nums.at(2) <<endl;
    cout <<"the value sotred in 3rd index of vector is : "<< nums.at(3) <<endl;

    return 0;
}