#include <iostream>

#include <string>

#include <vector>

using namespace std;

int main(){

    string s("Akash");

    if(!s.empty() && s[s.size()-1]=='h'){

        cout << "char is h" << endl;
    }


    vector <int> v{1,2,3};

    if(!v.empty()){
        cout << v[0] << endl;
    }

}
