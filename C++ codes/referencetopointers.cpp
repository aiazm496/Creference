#include <iostream>

int main(){

    int i = 2;

    int *p = &i;

    std::cout << i << std::endl;
    std::cout << p << std::endl;
    std::cout << &p << std::endl;

    int **pi = &p;   //pointer to pointer type object
    std::cout << pi << std::endl;


    int *&r = p;   //reference to pointer type object.

    int j = 3;

    r = &j;
    *r = 3;
    std::cout << *p << std::endl;
    std::cout << i << std::endl;










    return 0;
}
