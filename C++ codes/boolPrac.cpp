#include <iostream>


using namespace std;


int main(){


    int a,b,c,d;

    // d<c<b<a
    cin >> a >> b >> c >>d;

    if( a>b && b>c && c>d ){

        cout << "condition satisfied" << endl;
    }
    else{
        cout << "please enter as per value conditions" << endl;
    }

    return 0;
}
