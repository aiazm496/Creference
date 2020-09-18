#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v2{10,2};   //adds to elements via list iniliazation.

    cout << v2[0] << endl;

    vector<int> v3(10,2); //construct vector and  add 10 elements of val 2.
    vector<int> v1(v3);  // const vec v1 with v3 inilitiazer.

    cout << v3[4] << endl;


    vector <int> v5(10);  //add 10 elements value 0.

    vector <int> v6 = {10,2};

    vector <string> v7(10,"Hi");

    vector <string> v8{10,"hi"};

    vector <string> v9{"hi"}
    //vector <int> v6 = 10; //error as vector can
    //copy only va



}
