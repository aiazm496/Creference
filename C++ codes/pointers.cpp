#include <iostream>


int main(){

    int ival = 42;
    int *p = &ival; //p holds the address of ival; *p  points to ival.
    std::cout << p << std::endl;  //prints mempry
    std::cout << *p << std::endl;


    *p = 0;
    std::cout << *p << std::endl;
    std::cout << ival << std::endl;
    std::cout << p << std::endl; //still stores memory of def ival.




}
