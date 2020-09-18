#include <iostream>
#include <string>

int reused  = 42; //global variable

int main(){

    int unique = 0;  //local var
    std::cout << reused << unique << std::endl;

    int reused = 20; //local var
    std::cout << reused << unique << std::endl;//searching local scope.

    std::cout << ::reused << unique << std::endl;//search global var.


    return 0;
}
