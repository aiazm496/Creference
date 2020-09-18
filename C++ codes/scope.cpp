#include <iostream>


int y = 1; //global var

int main(){

    int y = 2;   //new local var
    std::cout<<y <<std::endl;

    int s = y;        //use local var
    std::cout<<s <<std::endl;

    std::cout << ::y  << std::endl; // ::y search for y in global scope.

    return 0;
}
