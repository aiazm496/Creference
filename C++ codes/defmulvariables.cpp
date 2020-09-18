#include <iostream>


int main(){

    int ival = 1024;
    int *pi = &ival;  //pi is pointer to ival
    int **ppi = &pi;  //ppi points to a pointer to an int.

    std::cout << ival << std::endl;
    std::cout << *pi << std::endl;
    std::cout << **ppi << std::endl;
    std::cout << pi << std::endl;
    std::cout << ppi << std::endl;  //pointer also has a memory address.


    return 0;
}
