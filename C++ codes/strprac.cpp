#include <iostream>

#include <string>

using namespace std;

int main() {


    string s("Hello");

    cout << s << endl;

    if (!s.size()==0){

        cout << "not empty string" << endl;
    }

    cout << s[0] << endl;

   //change all char to uppercase
   //

   for( auto &i : s)   //using ref to change s
        i= toupper(i);


    cout << s << endl;

    //could change first char

    //s[0] = toupper(s[0])



    return 0;
}
