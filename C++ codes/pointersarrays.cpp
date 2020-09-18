#include <iostream>

using namespace std;

int main(){

    int arr[3] = {1,2,3};

    int *p = arr;    //arrays are pointers only.
                     //  arr = &arr[0]

   cout << *p << endl;

   //int *p2 = &arr[1];

   //cout << *p2 << endl;
   cout << *(p+1) << endl;
   cout << *(p+2) << endl;





}
