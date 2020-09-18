#include <iostream>

int main(){

    int i = 4;
    int *pi = &i;       //pointer holds memory address of object i.
                        //pointer pi points to i.



    std::cout << pi << std::endl;
    std::cout << *pi << std::endl;   //*p gives value of obj to which it points.

    *pi = 5;          //changes the value of object at same memory

    std::cout << pi << std::endl;  //same memory address.
    std::cout << *pi << std::endl;   //*p gives value of obj to which it points.

    int *p;    //holds memory of random object.
    std::cout << *p << std::endl;       //random object printed.


    int *pa = nullptr;       //nullpointer
    std::cout << *pa << std::endl;    //holds no value.
    return 0;
}
