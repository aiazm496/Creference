#include <iostream>

using namespace std;

int main(){

    int number;

    int x = 1;
    int total = 0;

    while(x <= 5){

        cin >> number;
        total+=number;
        x+=1;
    }

    cout << "The total is: " << total << endl;


    return 0;
}
