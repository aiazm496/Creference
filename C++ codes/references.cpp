#include <iostream>

int main(){

    int i = 1024;
    int &refi = i;   //refi refers to i.


    std::cout << i << std::endl;
    std::cout << refi << std::endl;

    refi = 1000;
    std::cout << i << std::endl;
    std::cout << refi << std::endl;

    int ii = refi;
    std::cout << ii << std::endl;

    int &refii = refi;
    std::cout << refii << std::endl;

    refii = 500;
    std::cout << i << std::endl;
    std::cout << refi << std::endl;
    std::cout << refii << std::endl;



    int b = 4;

    int c = b;

    c= 5;
    std::cout << b << std::endl;
    std::cout << c << std::endl;


    return 0;
}
