#include <iostream>
#include <string>

using namespace std;

int main(){

    string s = "Aakash";
    cout << s.size()  << endl;

    auto len = s.size();
    cout << len  << endl;

    string s1 = "Hello";
    string s2 = "hi";
    s1=s2;   //copied s2 into s1.
    cout<< s1 <<" " <<  s2 << endl;


    string s3 = "Hi ";
    string s4 = "Aakash";
    string s5 = s3 + s4;
    cout << s5  << endl;




}
