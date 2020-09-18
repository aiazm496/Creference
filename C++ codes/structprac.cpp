#include <iostream>

struct area{

    unsigned length{};
    unsigned breadth{};

};



int main(){

    area rect1;

    std::cin >> rect1.length >> rect1.breadth;
    std::cout << "area is: " << rect1.length * rect1.breadth;




}
