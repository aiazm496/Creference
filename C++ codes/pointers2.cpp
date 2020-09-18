#include <iostream>


int main(){

   double dval = 3.2;
   double *pd = &dval;
   double *pd2 = pd;

    std::cout << dval << std::endl;
    std::cout << *pd << std::endl;
    std::cout << *pd2 << std::endl;



}
