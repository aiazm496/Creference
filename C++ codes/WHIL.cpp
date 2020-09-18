#include <iostream>
/* write a program to find sum
of first 10 natural numbers.*/

int main(){

    int val = 1;
    int sum = 0;

    while(val<11){
        sum+=val;
        ++val;

    }

    std::cout << "The total is " << sum << std::endl;

    return 0;
}
