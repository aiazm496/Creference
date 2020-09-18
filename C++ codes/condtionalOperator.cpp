#include <iostream>
#include <string>

using namespace std;

int main(){

    int grade = 91;

    string finalgrade = (grade < 60) ? "fail" : "pass";

    cout << finalgrade << endl;

    string detailgrade = (grade>90) ? "High" : (grade<60) ? "fail" : "pass";

    cout << detailgrade << endl;

    int a = 10, b = 20;

    string answer = (b>a) ? "b greater than a" : "a greater than b";

    cout << answer << endl;

    return 0;
}
