#include <iostream>

#include <vector>

using namespace std;
int main(){


    vector <int> v{1,2,3,4,5,6,7,8,9};

    cout << v[2] << endl;

    v[2] = 4;

    cout << v[2] << endl;

    for (auto i : v)
        cout << i << endl;

}
