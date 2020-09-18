#include <iostream>
#include <string>

using namespace std;


int main(){

    string s1 = "conTract";
    string s2 = "permanent";

    //string s3 = s1 + "\n" +  s2;

    for (auto c : s1)
        if(isupper(c)){
            cout << "the upper case letter is: " << c << endl;
        }


    }



