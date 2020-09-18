#include <iostream>
#include <string>

using namespace std;


int main(){

    string s = "akash";

    for ( auto &c : s)      //reference can change object.

        c = toupper(c);

        cout << s << endl;
    }



