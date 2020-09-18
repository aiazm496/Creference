#include <iostream>

using namespace std;


int main(){

    int arr[2] = {1,2};

    for (auto i : arr)
        cout << i << endl;

    cout << arr[1] << endl;


    //int arr[] = {1,2,3,4}; auto assing of dimension
    // int arr[5] = {}  //all elements inilialized to zero.
    // int *p = &i  p points to i. p = &i
    //arr is pointer to first element i.e. arr= &arr[0]

    int *p = arr;
    cout << *p << endl;
    cout << *(p+1) << endl;



}
