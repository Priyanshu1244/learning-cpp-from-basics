#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec1; // declearing vector with size 0

    vector<int> vec2 = {3, 5, 6}; // declearing and intializing a vector , size = number of elements in right side (3 in this case)
    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;

    vector<int> vec3(5, 0); // declearing vector with size and intializing all with 0
    cout << vec3[0] << endl;
    cout << vec3[1] << endl;
    cout << vec3[2] << endl;
    cout << vec3[3] << endl;
    cout << vec3[4] << endl;

    return 0;
}