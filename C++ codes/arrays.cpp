#include <iostream>

using namespace std;

int main(){

    int arr[4]= {1,2,3,4};
    int arr1[]  = {1,2,3,4,5,6};

    cout << arr[3] << endl;   // no iniliazer given , defaulted to 0.
    cout << arr1[4] << endl;

    string sarr[3] = {"Hi","akash"};  //last element empty string.

    cout << sarr[1] << endl;

    char arr2[2]  = {'a','b'};
    cout << arr2[1] << endl;

    for ( auto i : arr1)
        cout << i << endl;

    }
