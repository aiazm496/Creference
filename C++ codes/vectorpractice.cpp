#include <iostream>

#include <vector>
#include <string>
using namespace std;


int main(){

    vector <int> v1(2);   //2elements all zero

    for (auto i : v1)
        cout << i << endl;

    vector <int> v2(5,2);   //5 elements all valued 2.

    for (auto i : v2)
        cout << i << endl;


    vector <int> v3{1,2,3};   //added values

    for (auto i : v3)
        cout << i << endl;

    //can access elements using v3[2]

    vector <int> v4(v3);      //

    for (auto i : v4)
        cout << i << endl;


    v4.push_back(5);  //added 5 to v4

    for (auto i : v4)
        cout << i << endl;


    vector <string> v5{"hi"};
    for (auto i : v5)
        cout << i << endl;

    vector <string> v6{2,"hi"};  //2 times hi //can use (2,"hi")
    for (auto i : v6)
        cout << i << endl;

    for ( auto &r : v5){
        r = "bye";

    }

    for ( auto i : v5){
        i = "bye";
        cout << i << endl;
    }


    return 0;
    }


