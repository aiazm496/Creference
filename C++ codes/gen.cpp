#include <iostream>
#include <string>

int reused  = 42;

int main(){

    int unique = 0;
    std::cout << reused << unique << std::endl;

    int reused = 20;
    std::cout << reused << unique << std::endl;

    std::cout << ::reused << unique << std::endl;


    return 0;
}
