#include <iostream>
using namespace std;


int main(){

    int age = 18;

    switch(age){

        case 16:
            cout << "you are 16, go out!"<<endl;
            break;
        case 18:
            cout << "you are now adult" << endl;
            break;
        default:
            cout << "you are out of order" << endl;
            break;

    }

}
