#include <iostream>

using namespace std;

int main(){

    int a = 6 + 3*4/2 + 2;

    cout << a << endl;

    int b = ((6+3)*4)/2 + 2;  //bodmas first bracket then div,mul,add,sub.

    cout << b << endl;

    int c[] = {0,1,2,3,4};

    //c = &c[0]

    cout << *c  << endl;
    cout << *(c+1)  << endl;

    short s = 32767;  //max range of short
    s+=1;

    cout << s << endl; //crash result -32768

    cout << 21 % 6 << endl;

    cout << 21 % -6 << endl;

    cout << -21 % -6 << endl;

    cout << -21 % -6 << endl;

    cout << -21 /-7<< endl;



}
