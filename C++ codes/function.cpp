#include <iostream>


int mul(int x, int y){

    return x*y;

}



int main(){

    int j{},k{};

    std::cin >> j >> k;

    std::cout << "The product of two numbers is: " << mul(j,k) << std::endl;


}
