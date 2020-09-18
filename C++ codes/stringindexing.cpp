#include <iostream>
#include <string>

using namespace std;


int main(){

    string s = "Akash";

    if (!s.empty()){
        cout  <<  s << endl;
        cout << s[2] << endl;
        s[2] = toupper(s[2]);
        cout << s << endl;

    }

    }



