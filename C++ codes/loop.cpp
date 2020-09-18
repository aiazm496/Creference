#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int number;
    int total = 0;

    while(x<=5){       //usethis when you wanna runloop5times.
        cin >> number;
        total = total + number;
        x+=1;
    }

    cout << "Total is " << total << endl;

    return 0;
}
