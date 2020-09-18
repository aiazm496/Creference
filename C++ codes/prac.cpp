#include <iostream>


int main(){

    int i  = 2;
    int &r  = i;

    std::cout << i << std::endl;
    std::cout << r << std::endl;

    r = 3;

    std::cout << i << std::endl;
    std::cout << r << std::endl;

    int j = r;
    j = 4;
    std::cout << j << std::endl;
    std::cout << r << std::endl;
    std::cout << i << std::endl;

    int &k  = r;
    k=6;

    std::cout << k << std::endl;
    std::cout << r << std::endl;
    std::cout << i << std::endl;


    return 0;

}
