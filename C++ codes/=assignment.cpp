#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int a,b,c,d;
    a = b = c = d = {2};   //read from right side. d=2 which is assigned to c.

    cout << a << " " << c << endl;

    return 0;
}
