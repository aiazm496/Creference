#include <iostream>


int main(){

    int *p = nullptr;

    std::cout << p << std::endl;

    int i = 2;

    p = &i;

    std::cout << p << std::endl;
    std::cout << *p << std::endl;



    //*p = 2;

    //std::cout << p << std::endl;


    return 0;
}
