#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1;  //empty string def initialized.
    string s2 = s1; //s2 is copy of s1
    string s3 = "Hello";  //s3 is copy of string literal
    string s4(s3);  //direct initialization.
    string s5(5,'c');


    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;


}
