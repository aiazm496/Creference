#include <iostream>

using namespace std;


int main(){

    int arr[2][3] = {{1,2,3},{4,5,6}};

    cout << arr[0][1] << endl;

    for( auto i : arr[1])
        cout << i << endl;


}
