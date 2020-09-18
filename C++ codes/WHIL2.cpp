#include <iostream>

int main(){

    std::cout << "Please enter two numbers as range" << std::endl;
    int x,y;

    std::cin >> x >> y;

    while(x<=y){
        std::cout << x << std::endl;
        ++x;
    }



    return 0;
}
