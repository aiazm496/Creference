#include <iostream>
using namespace std;

//write a program such that it adds total of input numbers
//only way to quit is by entering -1 as age.

int main(){

    int age;
    int totalAge = 0;
    int noOfRecords = 0;

    while(age!=-1){

            cout << "please enter age or -1 to quit" << endl;
            cin >> age;
            totalAge+=age;
            noOfRecords+=1;

    }

    cout << "The total age is: " << totalAge <<endl;
    cout << "The average age is: " << totalAge/noOfRecords << endl;


    return 0;
}
