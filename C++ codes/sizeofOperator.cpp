#include <iostream>

using namespace std;


int main(){

    int arr[]  = {1,2,3,4,5};

    cout << sizeof(arr) << endl;
 //returns size in bits of an object/exression/type


    //length of array

    cout << sizeof(arr)/sizeof(arr[0]) << endl;

    string s = "Akash";
    cout << sizeof(s) << endl;


    return 0;
}
