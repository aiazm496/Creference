#include <iostream>


int main(){


   //int *p = nullptr; // no object to point.

   //std::cout << p << std::endl;

   int i = 2;
   int *pi = &i;
   int j = 3;
   std::cout << pi << std::endl;
   std::cout << *pi << std::endl;

   pi = &j;

   std::cout << pi << std::endl;   //memory stored in p changed
   std::cout << *pi << std::endl;  //pi now points to j.

   *pi=0;
   std::cout << pi << std::endl;   //memory stored same j=3.
   std::cout << *pi << std::endl;   //value of j changed.
   std::cout << j << std::endl;


    return 0;
}
