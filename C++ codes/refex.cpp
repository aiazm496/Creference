#include <iostream>


int main(){

    int ival = 1.01;
    int &rival = ival;
    //int &rval;     // must be initialized with a object.

    std::cout << rival << std::endl;

    return 0;
}
