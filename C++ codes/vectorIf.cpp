#include <iostream>
#include <string>
#include <vector>


using namespace std;



int main(){

    int grade = 69;
    string score;

    vector <string> scores = {"D","C","B","A","A++"};

    if(grade>90)
        score = scores[4];
    else if (grade>80 && grade<90)
        score = scores[3];

    else if(grade>70 && grade<80)
        score = scores[2];
    else if(grade>60 && grade<70)
        score = scores[1];
    else
        score = scores[0];


    cout << score << endl;




    return 0;
}
