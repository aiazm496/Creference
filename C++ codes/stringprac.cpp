#include <iostream>
#include <string>

using namespace std;

int main(){

    //string s;

    //getline(cin,s); //is used to enter full line with spaces allowed.

    //cout << s  << endl;

    string s1 = "abee";
    string s2 = "aca";

    if (s1<s2){
    cout << "y" << endl;
    }


    for (auto c: s1)
        cout << c << endl;


    return 0;
}
