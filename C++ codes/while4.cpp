#include <iostream>

int main(){

    int number;
    int number2;


    std::cin >> number;
    std::cin >> number2;

    int x = number;

    while(x<=number2){
        std::cout << x << std::endl;
        ++x;
        }

    return 0;
}
